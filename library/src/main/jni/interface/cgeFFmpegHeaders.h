/*
 * cgeFFmpegHeaders.h
 *
 *  Created on: 2015-12-10
 *      Author: Wang Yang
 *        Mail: admin@wysaid.org
 */

//不可直接在头文件中引用, 否则将对ffmpeg头文件产生较大依赖

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libavutil/avutil.h"
#include "libavutil/imgutils.h"
#include "libavutil/opt.h"
#include "libswresample/swresample.h"
#include "libswscale/swscale.h"
}
