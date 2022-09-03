#pragma once

#include <compare>
#include <cstdint>
#include <vector>

namespace wh {

  class event_data {
   public:
    event_data();
    explicit event_data(const char* s);

    friend auto operator<=>(const event_data&, const event_data&) = default;

   private:
    // TODO Store bytes_ in a shared_ptr to avoid copying
    std::vector<uint8_t> bytes_;
  };

}  // namespace wh