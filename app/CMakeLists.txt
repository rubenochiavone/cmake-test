add_executable(app src/main.cpp)

# define app version
set_target_properties(app PROPERTIES
        VERSION 1.0)

# 
target_link_libraries(app LINK_PUBLIC modulea)

# install
install(TARGETS app
        RUNTIME DESTINATION bin)
