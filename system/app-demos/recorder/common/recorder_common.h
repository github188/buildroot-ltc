/*
 * Copyright (c) 2016~2021 ShangHai InfoTM Ltd all rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Description: Recorder common functions
 *
 * Author:
 *     ranson.ni <ranson.ni@infotm.com>
 *
 * Revision History:
 * -----------------
 * 1.1  08/25/2017 init
 */
#include <qsdk/vplay.h>

#ifndef __RECORDER_COMMON_H__
#define __RECORDER_COMMON_H__

#define RECODE_TIME         30

/*
 * @brief recorder event handler
 * @param pName        -IN: event name
 * @param pArgs        -IN: event parameter
 * @return void
 */
void RecorderEventHandler(char *ps8Name, void *pArgs);

/*
 * @brief recorder signal handler
 * @param s32Sig        -IN: signal id
 * @return void
 */
void RecorderSignalHandler(int s32Sig);

/*
 * @brief recorder init signal handler
 * @param void
 * @return void
 */
void RecorderInitSignal(void);

/*
 * @brief init recorder info
 * @param pstInfo        -IN: recorder info
 * @return void
 */
void InitRecorderDefault(VRecorderInfo *pstInfo);

#endif