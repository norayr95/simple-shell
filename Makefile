# Compiler
CC = gcc

# Directories
INCLUDE_DIR = include
SRC_DIR = src
BUILD_DIR = build

# Flags
CFLAGS = -I$(INCLUDE_DIR) -Wall

# Sources and Objects
SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

# Output binary
TARGET = shell

# Default target: compile everything
all: $(TARGET)

# Linking the target
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile each .c file to .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean the build directory
clean:
	rm -rf $(BUILD_DIR) $(TARGET)
