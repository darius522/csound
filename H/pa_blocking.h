
#ifndef PA_BLOCKING_H
#define PA_BLOCKING_H

#include "portaudio.h"
#include "csoundCore.h"
#include "csound.h"
#include "soundio.h"

#if defined(___cplusplus)
extern "C" {
#endif

  typedef struct PA_BLOCKING_STREAM_ {
    ENVIRON *csound;
    PaStream *paStream;
    PaStreamParameters paParameters;
    void *paLock;
    void *clientLock;
    size_t actualBufferSampleCount;
    size_t currentIndex;
    MYFLT *actualBuffer;
  } PA_BLOCKING_STREAM;

int paBlockingReadWriteOpen(ENVIRON *csound,
    PA_BLOCKING_STREAM *pabs, PaStreamParameters *paParameters,
    csRtAudioParams *parm);

  int paBlockingReadWriteStreamCallback(const void *input,
                                 void *output,
                                 unsigned long frameCount,
                                 const PaStreamCallbackTimeInfo* timeInfo,
                                 PaStreamCallbackFlags statusFlags,
                                 void *userData);

  int paBlockingReadOpen(ENVIRON *csound,
                         PA_BLOCKING_STREAM *pabs,
                         PaStreamParameters *paParameters,
                         csRtAudioParams *parm);

  void paBlockingRead(PA_BLOCKING_STREAM *pabs, int samples, MYFLT *buffer);

  int paBlockingReadStreamCallback(const void *input, void *output,
                                   unsigned long frameCount,
                                   const PaStreamCallbackTimeInfo* timeInfo,
                                   PaStreamCallbackFlags statusFlags,
                                   void *userData);

  int paBlockingWriteOpen(ENVIRON *csound,
                          PA_BLOCKING_STREAM *pabs,
                          PaStreamParameters *paParameters,
                          csRtAudioParams *parm);

  void paBlockingWrite(PA_BLOCKING_STREAM *pabs, int bytes, MYFLT *buffer);

  int paBlockingWriteStreamCallback(const void *input, void *output,
                                    unsigned long frameCount,
                                    const PaStreamCallbackTimeInfo* timeInfo,
                                    PaStreamCallbackFlags statusFlags,
                                    void *userData);

  void paBlockingClose(void *csound, PA_BLOCKING_STREAM *pabs);

#if defined(__cplusplus)
};
#endif

#endif
