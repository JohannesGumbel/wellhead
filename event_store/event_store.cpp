#include "wh/event_store.hpp"

#include "wh/event.hpp"

namespace wh {

  event_id event_store::write(event_data e) {
    const event_id id = next_id_++;
    events_.push_back(event{
        .data = std::move(e),
        .id = id,
    });

    return id;
  }

  event event_store::read(event_id id) const {
    for (auto& e : events_) {
      if (e.id == id) return e;
    }

    return event{};
  }

}  // namespace wh