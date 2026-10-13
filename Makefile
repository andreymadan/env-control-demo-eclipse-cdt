PROJECT := env_control_demo
CC ?= gcc

SRC_DIR := src
DRV_DIR := drivers
BUILD_DIR := Debug

SOURCES := \
    $(SRC_DIR)/main.c \
    $(SRC_DIR)/config.c \
    $(SRC_DIR)/controller.c \
    $(SRC_DIR)/sensor_manager.c \
    $(SRC_DIR)/actuator_manager.c \
    $(SRC_DIR)/alarm_manager.c \
    $(DRV_DIR)/temperature_sensor.c \
    $(DRV_DIR)/humidity_sensor.c \
    $(DRV_DIR)/fan_driver.c \
    $(DRV_DIR)/heater_driver.c \
    $(DRV_DIR)/display_driver.c \
    $(DRV_DIR)/buzzer_driver.c \
    $(DRV_DIR)/logger_driver.c \
    $(DRV_DIR)/clock_driver.c

OBJECTS := $(patsubst %.c,$(BUILD_DIR)/%.o,$(SOURCES))
TARGET := $(BUILD_DIR)/$(PROJECT)

CPPFLAGS := -I$(SRC_DIR) -I$(DRV_DIR)
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic -O0 -g3
LDFLAGS ?=
LDLIBS ?=

.PHONY: all clean rebuild run

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p $(dir $@)
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(OBJECTS:.o=.d)

clean:
	rm -rf $(BUILD_DIR)

rebuild: clean all

run: all
	./$(TARGET)
