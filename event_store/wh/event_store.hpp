#pragma once

#include <list>

#include "event_data.hpp"
#include "event_id.hpp"

namespace wh {

  class event;

  class event_store {
   public:
    event_id write(event_data e);
    event read(event_id id) const;

   private:
    event_id next_id_ = 0;
    std::list<event> events_;
  };

}  // namespace wh
