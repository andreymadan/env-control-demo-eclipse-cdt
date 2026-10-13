cmake_minimum_required(VERSION 3.16)

project(env_control_demo C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_executable(env_control_demo
    src/main.c
    src/config.c
    src/controller.c
    src/sensor_manager.c
    src/actuator_manager.c
    src/alarm_manager.c
    drivers/temperature_sensor.c
    drivers/humidity_sensor.c
    drivers/fan_driver.c
    drivers/heater_driver.c
    drivers/display_driver.c
    drivers/buzzer_driver.c
    drivers/logger_driver.c
    drivers/clock_driver.c
)

target_include_directories(env_control_demo PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/drivers
)

if(MSVC)
    target_compile_options(env_control_demo PRIVATE /W4)
else()
    target_compile_options(env_control_demo PRIVATE -Wall -Wextra -Wpedantic)
endif()
