/*
 * Copyright 2020 Yeolar
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "Message.pb.h"

namespace raster {

class Task {
 public:
  Task(const Query& request, Result& response)
      : request_(request), response_(response) {}
  virtual ~Task() {}

  virtual void operator()() = 0;

 protected:
  const Query& request_;
  Result& response_;
};

} // namespace raster
