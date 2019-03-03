/* @Darius: Personal Dev. */

#include "csoundCore.h"
#include "pvstochastic.h"
#include "fftlib.h"
#include <complex.h>
#include <pstream.h>

const float bh_92db_1001[BH_SIZE] = {3.1942e-07,1.1341e-08,3.2373e-07,6.8548e-07,1.0735e-06,1.4875e-06,1.9268e-06,2.3909e-06,2.8791e-06,3.3905e-06,3.9244e-06,4.48e-06,5.0561e-06,5.6514e-06,6.265e-06,6.8957e-06,7.5422e-06,8.2026e-06,8.876e-06,9.5606e-06,1.0255e-05,1.0956e-05,1.1664e-05,1.2376e-05,1.309e-05,1.3804e-05,1.4516e-05,1.5224e-05,1.5927e-05,1.662e-05,1.7303e-05,1.7973e-05,1.8628e-05,1.9265e-05,1.9881e-05,2.0475e-05,2.1045e-05,2.1586e-05,2.2098e-05,2.2578e-05,2.3022e-05,2.343e-05,2.3798e-05,2.4124e-05,2.4406e-05,2.4642e-05,2.4829e-05,2.4966e-05,2.5051e-05,2.5081e-05,2.5055e-05,2.4971e-05,2.4828e-05,2.4625e-05,2.436e-05,2.4032e-05,2.3642e-05,2.3187e-05,2.2668e-05,2.2085e-05,2.1437e-05,2.0726e-05,1.9952e-05,1.9116e-05,1.822e-05,1.7264e-05,1.6253e-05,1.5186e-05,1.4069e-05,1.2904e-05,1.1694e-05,1.0445e-05,9.1607e-06,7.8463e-06,6.5078e-06,5.1516e-06,3.7846e-06,2.4143e-06,1.0491e-06,3.0242e-07,1.6305e-06,2.925e-06,4.1749e-06,5.3683e-06,6.4929e-06,7.5353e-06,8.481e-06,9.3154e-06,1.0022e-05,1.0584e-05,1.0984e-05,1.1202e-05,1.1219e-05,1.1013e-05,1.0564e-05,9.8468e-06,8.8379e-06,7.5115e-06,5.8412e-06,3.7985e-06,1.3548e-06,1.5209e-06,4.8605e-06,8.6968e-06,1.3065e-05,1.8002e-05,2.3544e-05,2.973e-05,3.6602e-05,4.4202e-05,5.2573e-05,6.1761e-05,7.1816e-05,8.2779e-05,9.471e-05,0.00010766,0.00012167,0.00013682,0.00015315,0.00017072,0.0001896,0.00020986,0.00023155,0.00025474,0.00027951,0.00030592,0.00033406,0.00036401,0.00039582,0.00042959,0.0004654,0.00050335,0.0005435,0.00058595,0.00063081,0.00067816,0.00072811,0.00078076,0.0008362,0.00089452,0.00095588,0.0010203,0.001088,0.0011591,0.0012336,0.0013117,0.0013935,0.0014791,0.0015687,0.0016625,0.0017604,0.0018628,0.0019696,0.0020811,0.0021974,0.0023187,0.0024451,0.0025767,0.0027137,0.0028564,0.0030048,0.0031592,0.0033195,0.003486,0.0036593,0.0038388,0.0040255,0.004219,0.0044196,0.0046273,0.0048431,0.0050664,0.0052977,0.005537,0.0057848,0.0060412,0.0063063,0.0065804,0.0068638,0.0071565,0.0074591,0.0077713,0.0080938,0.0084265,0.00877,0.0091241,0.0094893,0.0098661,0.010254,0.010654,0.011066,0.01149,0.011927,0.012377,0.01284,0.013315,0.013805,0.014309,0.014827,0.015359,0.015906,0.016468,0.017045,0.017637,0.018246,0.01887,0.019511,0.020169,0.020844,0.021536,0.022245,0.022973,0.023718,0.024482,0.025264,0.026066,0.026887,0.027728,0.028589,0.02947,0.030371,0.031294,0.032237,0.033201,0.03419,0.035198,0.03623,0.037285,0.03836,0.039461,0.040587,0.041734,0.042906,0.044103,0.045324,0.046571,0.047845,0.049141,0.050468,0.051817,0.053194,0.054598,0.056031,0.057491,0.058976,0.060492,0.062036,0.063608,0.065211,0.066842,0.068501,0.070191,0.071912,0.073664,0.075443,0.077257,0.079099,0.080975,0.082882,0.08482,0.086792,0.088794,0.090832,0.0929,0.095002,0.097135,0.099305,0.10151,0.10375,0.10602,0.10832,0.11066,0.11304,0.11545,0.11789,0.12037,0.12289,0.12544,0.12803,0.13065,0.13331,0.13601,0.13874,0.14151,0.14431,0.14715,0.15003,0.15295,0.1559,0.15889,0.16192,0.16498,0.16808,0.17122,0.1744,0.17761,0.18086,0.18415,0.18747,0.19083,0.19424,0.19767,0.20115,0.20466,0.20821,0.21179,0.21542,0.21907,0.22277,0.22651,0.23028,0.23408,0.23793,0.24181,0.24572,0.24967,0.25366,0.25769,0.26175,0.26584,0.26996,0.27413,0.27833,0.28256,0.28683,0.29113,0.29546,0.29983,0.30423,0.30866,0.31313,0.31762,0.32215,0.32671,0.3313,0.33592,0.34057,0.34525,0.34996,0.35471,0.35948,0.36426,0.36909,0.37393,0.37883,0.38373,0.38866,0.39362,0.39858,0.4036,0.40863,0.41368,0.41873,0.42385,0.42897,0.43411,0.43926,0.44444,0.44962,0.45486,0.46006,0.46534,0.47061,0.47588,0.48118,0.48648,0.49181,0.49715,0.50251,0.50788,0.51324,0.51863,0.52403,0.52942,0.53485,0.54028,0.5457,0.55113,0.55655,0.56201,0.56744,0.57289,0.57835,0.58381,0.58923,0.59469,0.60015,0.60557,0.61103,0.61646,0.62191,0.62734,0.63277,0.63816,0.64359,0.64898,0.65438,0.65974,0.66511,0.67047,0.6758,0.68114,0.68644,0.69174,0.69701,0.70225,0.70749,0.71273,0.71794,0.72312,0.72826,0.73338,0.7385,0.74358,0.74864,0.75366,0.75868,0.76364,0.7686,0.7735,0.7784,0.78324,0.78804,0.79285,0.79759,0.80231,0.80696,0.81161,0.8162,0.82076,0.82528,0.82978,0.83421,0.83861,0.84296,0.84727,0.85151,0.85573,0.85992,0.86404,0.8681,0.87213,0.8761,0.88004,0.88391,0.88773,0.89148,0.8952,0.89886,0.90246,0.90602,0.90952,0.91294,0.91632,0.91963,0.92289,0.92611,0.92924,0.93231,0.93532,0.9383,0.94118,0.944,0.94676,0.94946,0.9521,0.95467,0.95718,0.9596,0.96199,0.96428,0.96651,0.96868,0.97076,0.97278,0.97473,0.97662,0.97845,0.98019,0.98186,0.98344,0.98499,0.98642,0.98781,0.98912,0.99036,0.99154,0.99262,0.99361,0.99457,0.99541,0.99622,0.99693,0.99758,0.99814,0.99864,0.99904,0.99938,0.99966,0.99984,0.99994,1,0.99994,0.99984,0.99966,0.99938,0.99904,0.99864,0.99814,0.99758,0.99693,0.99622,0.99541,0.99457,0.99361,0.99262,0.99154,0.99036,0.98912,0.98781,0.98642,0.98499,0.98344,0.98186,0.98019,0.97845,0.97662,0.97473,0.97278,0.97076,0.96868,0.96651,0.96428,0.96199,0.9596,0.95718,0.95467,0.9521,0.94946,0.94676,0.944,0.94118,0.9383,0.93532,0.93231,0.92924,0.92611,0.92289,0.91963,0.91632,0.91294,0.90952,0.90602,0.90246,0.89886,0.8952,0.89148,0.88773,0.88391,0.88004,0.8761,0.87213,0.8681,0.86404,0.85992,0.85573,0.85151,0.84727,0.84296,0.83861,0.83421,0.82978,0.82528,0.82076,0.8162,0.81161,0.80696,0.80231,0.79759,0.79285,0.78804,0.78324,0.7784,0.7735,0.7686,0.76364,0.75868,0.75366,0.74864,0.74358,0.7385,0.73338,0.72826,0.72312,0.71794,0.71273,0.70749,0.70225,0.69701,0.69174,0.68644,0.68114,0.6758,0.67047,0.66511,0.65974,0.65438,0.64898,0.64359,0.63816,0.63277,0.62734,0.62191,0.61646,0.61103,0.60557,0.60015,0.59469,0.58923,0.58381,0.57835,0.57289,0.56744,0.56201,0.55655,0.55113,0.5457,0.54028,0.53485,0.52942,0.52403,0.51863,0.51324,0.50788,0.50251,0.49715,0.49181,0.48648,0.48118,0.47588,0.47061,0.46534,0.46006,0.45486,0.44962,0.44444,0.43926,0.43411,0.42897,0.42385,0.41873,0.41368,0.40863,0.4036,0.39858,0.39362,0.38866,0.38373,0.37883,0.37393,0.36909,0.36426,0.35948,0.35471,0.34996,0.34525,0.34057,0.33592,0.3313,0.32671,0.32215,0.31762,0.31313,0.30866,0.30423,0.29983,0.29546,0.29113,0.28683,0.28256,0.27833,0.27413,0.26996,0.26584,0.26175,0.25769,0.25366,0.24967,0.24572,0.24181,0.23793,0.23408,0.23028,0.22651,0.22277,0.21907,0.21542,0.21179,0.20821,0.20466,0.20115,0.19767,0.19424,0.19083,0.18747,0.18415,0.18086,0.17761,0.1744,0.17122,0.16808,0.16498,0.16192,0.15889,0.1559,0.15295,0.15003,0.14715,0.14431,0.14151,0.13874,0.13601,0.13331,0.13065,0.12803,0.12544,0.12289,0.12037,0.11789,0.11545,0.11304,0.11066,0.10832,0.10602,0.10375,0.10151,0.099305,0.097135,0.095002,0.0929,0.090832,0.088794,0.086792,0.08482,0.082882,0.080975,0.079099,0.077257,0.075443,0.073664,0.071912,0.070191,0.068501,0.066842,0.065211,0.063608,0.062036,0.060492,0.058976,0.057491,0.056031,0.054598,0.053194,0.051817,0.050468,0.049141,0.047845,0.046571,0.045324,0.044103,0.042906,0.041734,0.040587,0.039461,0.03836,0.037285,0.03623,0.035198,0.03419,0.033201,0.032237,0.031294,0.030371,0.02947,0.028589,0.027728,0.026887,0.026066,0.025264,0.024482,0.023718,0.022973,0.022245,0.021536,0.020844,0.020169,0.019511,0.01887,0.018246,0.017637,0.017045,0.016468,0.015906,0.015359,0.014827,0.014309,0.013805,0.013315,0.01284,0.012377,0.011927,0.01149,0.011066,0.010654,0.010254,0.0098661,0.0094893,0.0091241,0.00877,0.0084265,0.0080938,0.0077713,0.0074591,0.0071565,0.0068638,0.0065804,0.0063063,0.0060412,0.0057848,0.005537,0.0052977,0.0050664,0.0048431,0.0046273,0.0044196,0.004219,0.0040255,0.0038388,0.0036593,0.003486,0.0033195,0.0031592,0.0030048,0.0028564,0.0027137,0.0025767,0.0024451,0.0023187,0.0021974,0.0020811,0.0019696,0.0018628,0.0017604,0.0016625,0.0015687,0.0014791,0.0013935,0.0013117,0.0012336,0.0011591,0.001088,0.0010203,0.00095588,0.00089452,0.0008362,0.00078076,0.00072811,0.00067816,0.00063081,0.00058595,0.0005435,0.00050335,0.0004654,0.00042959,0.00039582,0.00036401,0.00033406,0.00030592,0.00027951,0.00025474,0.00023155,0.00020986,0.0001896,0.00017072,0.00015315,0.00013682,0.00012167,0.00010766,9.471e-05,8.2779e-05,7.1816e-05,6.1761e-05,5.2573e-05,4.4202e-05,3.6602e-05,2.973e-05,2.3544e-05,1.8002e-05,1.3065e-05,8.6968e-06,4.8605e-06,1.5209e-06,1.3548e-06,3.7985e-06,5.8412e-06,7.5115e-06,8.8379e-06,9.8468e-06,1.0564e-05,1.1013e-05,1.1219e-05,1.1202e-05,1.0984e-05,1.0584e-05,1.0022e-05,9.3154e-06,8.481e-06,7.5353e-06,6.4929e-06,5.3683e-06,4.1749e-06,2.925e-06,1.6305e-06,3.0242e-07,1.0491e-06,2.4143e-06,3.7846e-06,5.1516e-06,6.5078e-06,7.8463e-06,9.1607e-06,1.0445e-05,1.1694e-05,1.2904e-05,1.4069e-05,1.5186e-05,1.6253e-05,1.7264e-05,1.822e-05,1.9116e-05,1.9952e-05,2.0726e-05,2.1437e-05,2.2085e-05,2.2668e-05,2.3187e-05,2.3642e-05,2.4032e-05,2.436e-05,2.4625e-05,2.4828e-05,2.4971e-05,2.5055e-05,2.5081e-05,2.5051e-05,2.4966e-05,2.4829e-05,2.4642e-05,2.4406e-05,2.4124e-05,2.3798e-05,2.343e-05,2.3022e-05,2.2578e-05,2.2098e-05,2.1586e-05,2.1045e-05,2.0475e-05,1.9881e-05,1.9265e-05,1.8628e-05,1.7973e-05,1.7303e-05,1.662e-05,1.5927e-05,1.5224e-05,1.4516e-05,1.3804e-05,1.309e-05,1.2376e-05,1.1664e-05,1.0956e-05,1.0255e-05,9.5606e-06,8.876e-06,8.2026e-06,7.5422e-06,6.8957e-06,6.265e-06,5.6514e-06,5.0561e-06,4.48e-06,3.9244e-06,3.3905e-06,2.8791e-06,2.3909e-06,1.9268e-06,1.4875e-06,1.0735e-06,6.8548e-07,3.2373e-07};

// Init Function

int32_t pvstochasticset(CSOUND *csound, PVSSTOCH *p)
{
    // Local Variable
    uint16 M = *p->M;
    uint16 N = *p->N;
    uint16 Mf = 1 - M%2; // used in window symmetry
    p->buflen = M;
    *p->thresh = log((float)(-*p->thresh * csound->Get0dBFS(csound)) / 5.0f);
    p->framecount = 0;
    p->maxsines = 50;
    
    printf("pthresh: %f || 0dbfs: %f\n", *p->thresh, csound->Get0dBFS(csound));
    
    // Check input values
    if (M < 16)
        *p->M = 16;
    if (!(N & (N-1)))
        *p->N = (uint16)pow(2, ceil(log(N)/log(2)));
    
    // Anal/Window
    csound->AuxAlloc(csound, (N+2) * (sizeof(MYFLT)), &p->analbuf);
    csound->AuxAlloc(csound, (M+Mf) * (sizeof(MYFLT)), &p->analwinbuf);
    
    // i/O
    csound->AuxAlloc(csound, (p->buflen+1) * (sizeof(MYFLT)), &p->input);
    csound->AuxAlloc(csound, ((2*M)+1) * (sizeof(MYFLT)), &p->m_output);
    
    // Peak Tracking
    csound->AuxAlloc(csound, (N/2+1) * (sizeof(MYFLT)), &p->logmags);
    csound->AuxAlloc(csound, (N/2+1) * (sizeof(MYFLT)), &p->mags);
    csound->AuxAlloc(csound, (N/2+1) * (sizeof(MYFLT)), &p->phase);
    csound->AuxAlloc(csound, (N/2+1) * (sizeof(MYFLT)), &p->ploc);
    csound->AuxAlloc(csound, (p->maxsines+1) * (sizeof(MYFLT)), &p->imags);
    csound->AuxAlloc(csound, (p->maxsines+1) * (sizeof(MYFLT)), &p->iphase);
    csound->AuxAlloc(csound, (p->maxsines+1) * (sizeof(MYFLT)), &p->iploc);
    csound->AuxAlloc(csound, (p->maxsines+1) * (sizeof(MYFLT)), &p->prev_iphase);
    csound->AuxAlloc(csound, (p->maxsines+1) * (sizeof(MYFLT)), &p->prev_iploc);
    
    // Init subscripts
    p->pin = 0;
    p->pout = 0;
    p->BUFFREADY = 0;
    p->tocppin = M;
    
    // Buffer pointers
    MYFLT* analbuf = p->analbuf.auxp;
    MYFLT* input = p->input.auxp;
    MYFLT* output = p->m_output.auxp;
    MYFLT* analwinbuf = p->analwinbuf.auxp;
    
    // Check nullptr
    if (!p->analbuf.auxp
        || !p->analwinbuf.auxp
        || !p->input.auxp
        || !p->m_output.auxp)
        return csound->InitError(csound,Str("pvsstochastic: Failed Initializing buffers\n"));
    if (*p->M > *p->N)
      return csound->InitError(csound,Str("pvsstochastic: window size must be smaller than fft size\n"));

    // Creating window
    generateWindow((uint16)*p->wintype, analwinbuf, M);
    
    // Zero-out buffers
    for (int i = 0 ; i < M+Mf ; i++) {
        input[i] = FL(0.0);
        output[i] = FL(0.0);
        output[i+M] = FL(0.0);
    }
    
    for (int i = 0 ; i < p->buflen ; i++) {
        analbuf[i] = FL(0.0);
    }

    return OK;
}

// Main Callback
    
int32_t pvstochastic(CSOUND *csound, PVSSTOCH *p)
{
    int nsmps = csound->ksmps;
    MYFLT *aout = p->aout;
    MYFLT *ain  = p->ain;
    MYFLT *input = (MYFLT *) (p->input.auxp);
    MYFLT *output = (MYFLT *) (p->m_output.auxp);
    uint16 M = (uint16) *p->M;
    uint16 H = (uint16) *p->H;


    for (int ii = 0 ; ii<nsmps; ii++) {
        // get input samples
        input[p->pin++] = (MYFLT)ain[ii];
        aout[ii] = output[p->pout++];
        
        if (p->pout>=2*M)
            p->pout = 0;
        if (p->pin>=M) {
            p->BUFFREADY = 1;
            p->pin = 0;
        }
        
        //for every new bufflen-overlap-new samples, process block. Special case for very first block
        if (p->pin%(H)==0 && p->BUFFREADY)
            compute_block(csound,p);
    }
    return OK;
}

void compute_block(CSOUND *csound, PVSSTOCH *p)
{
    uint16 M = *p->M;
    uint16 N = *p->N;
    uint16 H = *p->H;
    uint16 pin = p->pin;
    uint16 buflen = p->buflen;
    double  normwins = ((double)(2.0*H)/(double)M); //window normalization
    MYFLT *analwinbuf = (MYFLT*) p->analwinbuf.auxp;
    MYFLT *outbuf = (MYFLT*) p->m_output.auxp;
    MYFLT *analbuf = (MYFLT*) p->analbuf.auxp;
    MYFLT *input = (MYFLT*) p->input.auxp;
    
    if (pin<0)
        pin = buflen + pin;
    
    for (int i = 0 ; i < N ; i++) {
        if (i<M) {
            if (++pin>=buflen) {
                pin = 0;
            }
            analbuf[i] = input[pin] * analwinbuf[i];
        } else {
            analbuf[i] = FL(0.0);
        }
    }
    
    // perform fft
    performeRealFFT(csound,p,analbuf,N);

    findSpectralPeaksForFrame(analbuf,p);

    // perform ifft / swap bins
    analbuf[N] = analbuf[1];
    analbuf[1] = analbuf[N + 1] = FL(0.0);
    performeRealInvFFT(csound,p,analbuf,N);
    
    p->tocppin = p->pout-1;

    for (int i = 0 ; i < M ; i++) {
        if (++p->tocppin>=2*M)
            p->tocppin = 0;
        if (i<(M-H)) {

            outbuf[p->tocppin] += (analbuf[i] * normwins);
        }
        else {
            outbuf[p->tocppin] = analbuf[i] * normwins;
        }
    }
    p->framecount++;
}

// FFT Operations

void performeRealFFT(CSOUND *csound, PVSSTOCH *p, MYFLT *buf, int32_t FFTsize)
{
    csoundRealFFTnp2(csound, buf, FFTsize);
}

void performeRealInvFFT(CSOUND *csound, PVSSTOCH *p, MYFLT *buf, int32_t FFTsize)
{
    csoundInverseRealFFTnp2(csound, buf, FFTsize);
}

void randomizeSpectrumPhase(MYFLT *buf, int32_t FFTsize)
{
    for (int i = 0; i < FFTsize + 2; i += 2) {
        MYFLT mag = HYPOT(buf[i], buf[i + 1]);
        MYFLT  randph = (((MYFLT)rand() / RAND_MAX) * 2 * M_PI);
        complex double ph =  cos(randph) + I*sin(randph);
        buf[i + 1] = mag * (MYFLT)cimagf(ph);
    }
}

void generateWindow(uint16 wintype, MYFLT *buf, uint32 winsize)
{
    double a[4] = {0.35875,0.48829,0.14128,0.01168};
    switch (wintype) {
        case eWIN_HANN:
            for (int i = 0 ; i < winsize ; i++) {
                buf[i] = FL(0.5) - COS(i * TWOPI_F / (winsize - 1)) * FL(0.5);
            }
            break;
        case eWIN_HAMMING:
            for (int i = 0 ; i < winsize ; i++) {
                buf[i] = FL(0.54) - COS(i * TWOPI_F / (winsize - 1)) * FL(0.46);
            }
            break;
        case eWIN_BLACKMAN:
            for (int i = 0 ; i < winsize ; i++) {
                buf[i] = FL(0.42) - FL(0.5) * COS(2 * M_PI * i / (winsize - 1)) + FL(0.08) * COS(4 * M_PI * i / (winsize - 1));
            }
            break;
        case eWIN_BHARRIS_3:
            for (int i = 0 ; i < winsize ; i++) {
                buf[i] = FL(a[0]) - FL(a[1]) * COS(2 * M_PI * i / (winsize - 1)) + FL(a[2]) * COS(4 * M_PI * i / (winsize - 1)) - FL(a[3]) * COS(6 * M_PI * i / (winsize - 1));
            }
            break;
        default:
            printf("invalid window type detected\n");
    }
}

void generateSpectralSines(double *iploc, double *ipmag, double *ipphase, int n_peaks, double *real, double*imag, int size_spec)
{
    int i=0,ii=0,jj=0, ploc_int;
    int size_spec_half = (int)floor(size_spec/2);
    float bin_remainder,loc,mag;
    
    // zero out mag/phase buffers
    for (i=0;i<(size_spec_half/2+1);i++) {
        real[i] = FL(0.0);
        imag[i] = FL(0.0);
    }
    
    for(ii=0;ii<n_peaks; ii++)
    {
        loc = iploc[ii];
        bin_remainder = floor(loc + 0.5)-loc;
        ploc_int = (int)floor(loc+0.5);
        
        if((loc>=5)&&(loc<size_spec_half-4))
        {
            mag = pow(10,(ipmag[ii]/20.0));
            
            for(jj=-4;jj<5;jj++)
            {
                real[ploc_int+jj] += mag*bh_92db_1001[(int)((bin_remainder+jj)*100) + BH_SIZE_BY2]*cos(ipphase[ii]);
                imag[ploc_int+jj] += mag*bh_92db_1001[(int)((bin_remainder+jj)*100) + BH_SIZE_BY2]*sin(ipphase[ii]);
            }
        }
        else if((loc>0)&&(loc<5))
        {
            mag = pow(10,(ipmag[ii]/20.0));
            
            for(jj=-4;jj<5;jj++)
            {
                
                if(ploc_int+jj<0)
                {
                    real[-1*(ploc_int+jj)] += mag*bh_92db_1001[(int)((bin_remainder+jj)*100) + BH_SIZE_BY2]*cos(ipphase[ii]);
                    imag[-1*(ploc_int+jj)] += -1*mag*bh_92db_1001[(int)((bin_remainder+jj)*100) + BH_SIZE_BY2]*sin(ipphase[ii]);
                    
                }
                else if (ploc_int+jj==0)
                {
                    real[(ploc_int+jj)] += 2*mag*bh_92db_1001[(int)((bin_remainder+jj)*100) + BH_SIZE_BY2]*cos(ipphase[ii]);
                }
                else
                {
                    real[(ploc_int+jj)] += mag*bh_92db_1001[(int)((bin_remainder+jj)*100) + BH_SIZE_BY2]*cos(ipphase[ii]);
                    imag[ploc_int+jj] += mag*bh_92db_1001[(int)((bin_remainder+jj)*100) + BH_SIZE_BY2]*sin(ipphase[ii]);
                }
            }
        }
        else if((loc>=size_spec_half-4)&&(loc<size_spec_half-1))
        {
            mag = pow(10,(ipmag[ii]/20.0));
            
            for(jj=-4;jj<5;jj++)
            {
                if(ploc_int+jj>size_spec_half)
                {
                    real[size_spec-(ploc_int+jj)] += mag*bh_92db_1001[(int)((bin_remainder+jj)*100) + BH_SIZE_BY2]*cos(ipphase[ii]);
                    imag[size_spec-(ploc_int+jj)] += -1*mag*bh_92db_1001[(int)((bin_remainder+jj)*100) + BH_SIZE_BY2]*sin(ipphase[ii]);
                    
                }
                else if(ploc_int+jj==size_spec_half)
                {
                    real[(ploc_int+jj)] += 2*mag*bh_92db_1001[(int)((bin_remainder+jj)*100) + BH_SIZE_BY2]*cos(ipphase[ii]);
                    
                }
                else
                {
                    real[(ploc_int+jj)] += mag*bh_92db_1001[(int)((bin_remainder+jj)*100) + BH_SIZE_BY2]*cos(ipphase[ii]);
                    imag[ploc_int+jj] += mag*bh_92db_1001[(int)((bin_remainder+jj)*100) + BH_SIZE_BY2]*sin(ipphase[ii]);
                }
            }
        }
        
    }
    
    for(ii=1;ii<size_spec_half;ii++)
    {
        real[size_spec_half+ii]=real[size_spec_half-ii];
        imag[size_spec_half+ii]=-1*imag[size_spec_half-ii];
    }
}

// Spectral Peak Detection

void findSpectralPeaksForFrame(double *frame, PVSSTOCH *p)
{
    /* compute bin indexes array of spectral peak of a given mag. spectrum */
    
    int prevMin, nextMin, n = 0;
    double peakmag, lpeakmag, rpeakmag;
    uint16 N = *p->N;
    double *logmags = p->logmags.auxp;
    double *mags = p->mags.auxp;
    double *phase = p->phase.auxp;
    uint16 *ploc = p->ploc.auxp;
    MYFLT logthresh = *p->thresh;
    double *iploc = p->iploc.auxp;
    double *imags = p->imags.auxp;
    double *iphase = p->iphase.auxp;

    printf("\nRAW\n");
    
    // 1. Take the logarithm of the magnitudes
    // @ToDO: check if rect. to polar conversion is necessary
    for (int i = 0 ; i < N+2 ; i+=2) {
        int idx = (int)floor(i/2);
        
        /* rectangular to polar */
        mags[idx] = 1.0 * HYPOT(frame[i], frame[i+1]);
        logmags[idx] = log((double)FABS(mags[idx])); // convert to log. magnitude for perceptual reason
        phase[idx] = atan2(frame[i+1], frame[i]);
        printf("%d %f\n",idx,logmags[idx]);
    }
    
    // 2. Check for all the bins that are above threshold and adjacent bins
    // Calculate n and fill ploc accordingly
    for (int i = 0; i < (N/2); i++) {
        if (i)
            prevMin = (logmags[i] > logmags[i - 1] ? 1 : 0);
        else
            prevMin = 0;
        nextMin = (logmags[i] >= logmags[i + 1] ? 1 : 0);
        // If peak deteced
        if ((logmags[i] > logthresh) && (prevMin && nextMin)) {
            ploc[n] = (uint16)i;
            n++;
        }
        
        if (n >= p->maxsines)
            break;
    }
    
    printf("\nPeaks\n");
    
    // 3. Once we have ploc, interpolate
    for (int i = 0 ; i < n-1 ; i++) {
        peakmag = logmags[ploc[i]]; //magnitude of peak bin
        lpeakmag = logmags[ploc[i]-1]; //magnitude of bin at left
        rpeakmag = logmags[ploc[i]+1]; // magnitude of bin at right
        
        // interpolated bin#
        iploc[i] = ploc[i];//ploc[i] + 0.5 * (lpeakmag-rpeakmag)/(lpeakmag-2*peakmag+rpeakmag); // center of parabola
        //printf("iploc: %f\n",iploc[i]);
        // interpolated mag
        imags[i] = logmags[ploc[i]];//peakmag - 0.25 * (lpeakmag-rpeakmag)*(*iploc-ploc[i]); // magnitude of peaks
        //printf("imag: %f\n",imags[i]);
        // interpolated phase
        iphase[i] = phase[ploc[i]];//((phase[(int)CEIL(iploc[i])]-phase[(int)FLOOR(iploc[i])])*((iploc[i]-(int)FLOOR(iploc[i]))/((int)CEIL(iploc[i])-(int)FLOOR(iploc[i]))))+phase[(int)FLOOR(iploc[i])]; // phase of peaks by linear interpolation
        printf("%f %f\n",iploc[i],imags[i]);
    }
    
    // 4. Generate spectral sine at locations
    //generateSpectralSines(iploc, imags, iphase, n-1, mags, phase, N);
    
    // 5. Fill frame buffer
    for (int i = 0 ; i < N+2 ; i+=2) {
       // int idx = (int)floor(i/2);
        /* polar to rectangular not required: genSpecSines does it for us */
        frame[i] = mags[i] * FL(cos(phase[i]));
        frame[i+1] = mags[i] * FL(sin(phase[i]));
    }
}
