#include "wh/string.hpp"

#include <cstring>

namespace wh {

  size_t string_length(const char* s) { return s ? strlen(s) : 0; }

}  // namespace wh
