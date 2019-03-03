// @Darius: Personal Dev.

#define BH_SIZE 1001
#define BH_SIZE_BY2 501
#define MFACTOR 100

typedef struct {
    OPDS h;
    
    // Opcode Args
    MYFLT  *aout; // a-rate output
    MYFLT  *ain; // a-rate input
    MYFLT  *N; // i-rate fft size
    MYFLT  *M; // i-rate window size
    MYFLT  *H; // i-rate overlap size
    MYFLT  *thresh; // i-rate overlap size
    MYFLT  *wintype; // i-rate overlap size
    
    uint32 maxsines; //may make it args
    uint32 buflen;
    uint16 half_M;
    uint32 pin;
    uint32 pout;
    int     tocppin;
    uint32 framecount;
    
    //FFT buffers
    AUXCH  input;
    AUXCH  analbuf;
    AUXCH  analwinbuf;
    AUXCH  m_output;
    int    BUFFREADY;
    
    //Spectral peak buffers
    AUXCH  logmags;
    AUXCH  mags;
    AUXCH  phase;
    AUXCH  ploc;
    AUXCH  iploc;
    AUXCH  iphase;
    AUXCH  imags;
    AUXCH  prev_iploc;
    AUXCH  prev_iphase;
    
} PVSSTOCH;

enum eWINTYPE {
    
    eWIN_HANN = 0,
    eWIN_HAMMING,
    eWIN_BLACKMAN,
    eWIN_BHARRIS_3,
    
};

void performeRealFFT(CSOUND *csound, PVSSTOCH *p, MYFLT *buf, int32_t FFTsize);
void performeRealInvFFT(CSOUND *csound, PVSSTOCH *p, MYFLT *buf, int32_t FFTsize);
void randomizeSpectrumPhase(MYFLT *buf, int32_t FFTsize);
void generateWindow(uint16 wintype, MYFLT *buf, uint32 winsize);
void compute_block(CSOUND *csound, PVSSTOCH *p);

// Spectral Peak Tracking
void findSpectralPeaksForFrame(double *frame, PVSSTOCH *p);
void generateSpectralSines(double *iploc, double *ipmag, double *ipphase, int n_peaks, double *real, double*imag, int size_spec);
