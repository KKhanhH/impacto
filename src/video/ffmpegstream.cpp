#include "ffmpegstream.h"

namespace Impacto {
namespace Video {

FFmpegStream::FFmpegStream(AVStream* avStream, AVCodecContext* codecCtx) {
  stream = avStream;
  CodecContext = codecCtx;
  PacketLock = SDL_CreateMutex();
  FrameLock = SDL_CreateMutex();
  DecodeCond = SDL_CreateCond();
}

FFmpegStream::~FFmpegStream() {
  avcodec_close(CodecContext);
  SDL_DestroyMutex(PacketLock);
  SDL_DestroyMutex(FrameLock);
  SDL_DestroyCond(DecodeCond);
}

}  // namespace Video
}  // namespace Impacto