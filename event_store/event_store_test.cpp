#include "wh/event_store.hpp"

#include <catch.hpp>

#include "wh/event.hpp"

TEST_CASE("a single event can be written and then read") {
  wh::event_store es;

  const char* written_data = "event data";
  const wh::event_id id = es.write(wh::event_data{written_data});

  const wh::event expected{
      .data = wh::event_data{written_data},
      .id = id,
  };
  CHECK(expected == es.read(id));
}

TEST_CASE("can read specific events by id") {
  wh::event_store es;

  const wh::event_id first_id = es.write(wh::event_data{"first"});
  const wh::event_id second_id = es.write(wh::event_data{"second"});

  CHECK(es.read(first_id).data == wh::event_data{"first"});
  CHECK(es.read(second_id).data == wh::event_data{"second"});
}
