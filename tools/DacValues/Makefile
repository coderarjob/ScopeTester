BUILD_DIR ?= out
SRC_DIR := src
BUILD ?= Debug
LLVM ?= 1

all:

# ==========================================================
BIN := $(BUILD_DIR)/dv
BUILD_FLAGS := --color on -O $(BUILD) -femit-bin=$(BIN)

ifeq ($(LLVM), 0)
BUILD_FLAGS += -fno-llvm
endif

$(BIN): $(SRC_DIR)/main.zig
	mkdir -p $(BUILD_DIR)
	zig build-exe $(BUILD_FLAGS) $^

# ==========================================================
clean:
	rm -rf $(BUILD_DIR)
# ==========================================================
TEST_FLAGS := $(BUILD_FLAGS)
test: $(SRC_DIR)/testmain.zig
	zig test $(TEST_FLAGS) $^
# ==========================================================
ARGS ?= ""
run: $(BIN)
	@./$(BIN) $(ARGS)

# ==========================================================
all: $(BIN)

.PHONY: clean all run
