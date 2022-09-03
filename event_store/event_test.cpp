#include "wh/event.hpp"

#include <catch.hpp>

TEST_CASE("events with different data aren't equal") {
  CHECK(wh::event{wh::event_data{"a"}} != wh::event{wh::event_data{"b"}});
}
