CC := gcc
LD := ld
OBJDUMP := objdump
OBJCOPY := objcopy
AR := ar

cc_definitions := -DF_CPU=$(clock)        \
				  -DMPU_ARCH=$(MPU_ARCH)  \
				  -DHW_VER=$(HW_VER)      \
				  -DUNITTESTS

ld_flags :=

cc_flags := $(cc_definitions)           \
		    -Wall                       \
		    -Wextra                     \
		    -std=c99                    \
		    -I $(INCLUDE_ROOT_DIR)      \
		    -I $(INCLUDE_ROOT_DIR)/mock \
		    -MMD                        \
		    -MP

ifdef DEBUG
	cc_flags += -g
endif
