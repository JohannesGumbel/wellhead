#include "wh/event.hpp"

#include <iostream>

namespace wh {

  std::ostream& operator<<(std::ostream& os, const event& e) {
    os << "event{?}";
    return os;
  }

}  // namespace wh
