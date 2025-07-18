SRC_DIR := $(dir $(lastword $(MAKEFILE_LIST)))

firmware_SRC := $(SRC_DIR)main.c   \
				$(SRC_DIR)tests.c  \
				$(SRC_DIR)mode.c   \
				$(SRC_DIR)irq.c

ifeq ($(ARCH), avr)
firmware_SRC += $(SRC_DIR)arch/avr/hal.c
endif

firmware_CFLAGS := $(cc_flags)
firmware_LDFLAGS := $(ld_flags)
firmware_DEP :=

$(call compile_target,firmware)
$(call link_target,firmware)
$(call link_target_firmware_bin,firmware)

ALL := $(firmware_BIN)
