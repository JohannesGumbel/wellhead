set(WELLHEAD_CLANG_FORMAT_COMMAND
    find ${PROJECT_SOURCE_DIR} \( -name \*.cpp -or -name \*.hpp \) -not -ipath \*/third_party/\* |
        xargs clang-format -i -style=file
)

add_custom_target(clang-format
    COMMAND ${WELLHEAD_CLANG_FORMAT_COMMAND}
    VERBATIM
)

add_custom_target(test-clang-format
    COMMAND ${WELLHEAD_CLANG_FORMAT_COMMAND} --verbose -Werror --dry-run
    VERBATIM
)