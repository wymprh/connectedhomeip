/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 * @file
 *   This file defines the API for the handler for data model messages.
 */

#ifndef DATA_MODEL_HANDLER_H
#define DATA_MODEL_HANDLER_H

#include "app/util/util.h"

extern "C" {
void HandleDataModelMessage(const chip::MessageHeader & header, chip::System::PacketBuffer * buffer,
                            chip::SecureSessionMgrBase * mgr);
void InitDataModelHandler();
}

#endif // DATA_MODEL_HANDLER_H