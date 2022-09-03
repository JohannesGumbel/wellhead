#include "wh/event_data.hpp"

#include <wh/string.hpp>

namespace wh {

  event_data::event_data() {}

  event_data::event_data(const char* s)
      : bytes_((uint8_t*)s, (uint8_t*)s + string_length(s)) {}

}  // namespace wh