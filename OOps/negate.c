/* @Darius: Personal Dev. */
#include "csoundCore.h"
#include "negate.h"
#include <math.h>

/* Performance a-rate function to negate a signal */

int32_t negateset(CSOUND *csound, NEGATE *p)
{
    //Dummy init function for testing
    return csound->InitError(csound,"error at init negate\n");
    return OK;
}

int32_t negate(CSOUND *csound, NEGATE *p)
{
    int n, nsmps = csound->ksmps;
    MYFLT *ar = p->ar;
    //MYFLT *as = p->asig;
    
    for (n = 0 ; n<nsmps; n++) {
        ar[n] = sin(csound->tpidsr*n*440);
    }
    return OK;
}
