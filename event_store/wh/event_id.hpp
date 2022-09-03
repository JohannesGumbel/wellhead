#pragma once

#include <cstdint>

namespace wh {

  using event_id = uint64_t;

  enum : event_id { invalid_event_id = (event_id)-1 };

}  // namespace wh