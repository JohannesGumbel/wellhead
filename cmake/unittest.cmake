function(add_unittest name)
    cmake_parse_arguments(
        ARGS
        "" # options
        "" # one value args
        "LIBS;ENV" # multi value args
        ${ARGN})

    add_executable(${name} ${name}.cpp)
    target_link_libraries(${name} PRIVATE third_party_lib_catch ${ARGS_LIBS})

    add_test(
        NAME ${name}
        COMMAND ${CMAKE_COMMAND} -E env ${ARGS_ENV} $<TARGET_FILE:${name}>)
endfunction()
