add_executable(app
    src/main.cpp
)


target_compile_definitions(app PRIVATE
    "GRAVITY_VALUE=9.819F"
)