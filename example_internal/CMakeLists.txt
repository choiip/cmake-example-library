add_executable(bar bar.cpp)

target_link_libraries(bar PRIVATE Foo::foo)

set_target_properties(bar PROPERTIES INSTALL_RPATH "$ORIGIN/../lib64")

install(
  TARGETS bar
  RUNTIME DESTINATION bin
)
