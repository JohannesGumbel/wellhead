#include "wh/event_data.hpp"

#include <catch.hpp>

TEST_CASE("event data can construct with char* nullptr") {
  (void)wh::event_data{(char*)nullptr};
}
