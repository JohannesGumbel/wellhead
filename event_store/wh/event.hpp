#pragma once

#include <compare>
#include <iosfwd>

#include "event_data.hpp"
#include "event_id.hpp"

namespace wh {

  class event {
   public:
    const event_data data;
    const event_id id = invalid_event_id;

    friend auto operator<=>(const event&, const event&) = default;
  };

  std::ostream& operator<<(std::ostream& os, const event& e);

}  // namespace wh
