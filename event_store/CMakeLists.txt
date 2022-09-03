add_library(event_store STATIC
    event.cpp
    event_data.cpp
    event_store.cpp
)
target_link_libraries(event_store PRIVATE support)

function(add_event_store_unittest name)
    add_unittest(${name} LIBS event_store)
endfunction()

add_event_store_unittest(event_test)
add_event_store_unittest(event_data_test)
add_event_store_unittest(event_store_test)
