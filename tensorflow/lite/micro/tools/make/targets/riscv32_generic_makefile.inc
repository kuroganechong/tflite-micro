# Settings for RISCV 32-bit toolchain.
TARGET_ARCH := riscv32
TARGET_TOOLCHAIN_PREFIX := riscv64-unknown-elf-

TARGET_DEFAULT_TOOLCHAIN_ROOT := $(DOWNLOADS_DIR)/riscv_toolchain/bin/
TARGET_TOOLCHAIN_ROOT := $(TARGET_DEFAULT_TOOLCHAIN_ROOT)
ifeq ($(TARGET_TOOLCHAIN_ROOT), $(TARGET_DEFAULT_TOOLCHAIN_ROOT))
  $(eval $(call add_third_party_download,$(RISCV_TOOLCHAIN_URL),$(RISCV_TOOLCHAIN_MD5),riscv_toolchain,))
endif

export PATH := $(TARGET_TOOLCHAIN_ROOT):$(PATH)

PLATFORM_FLAGS = \
  -march=rv32imac \
  -mabi=ilp32 \
  -mcmodel=medany \
  -mexplicit-relocs \
  -fno-builtin-printf \
  -DTF_LITE_MCU_DEBUG_LOG \
  -DTF_LITE_USE_GLOBAL_CMATH_FUNCTIONS \
  -funsigned-char \
  -fno-delete-null-pointer-checks \
  -fomit-frame-pointer

CXXFLAGS += $(PLATFORM_FLAGS) \
  -fpermissive \
  -fno-use-cxa-atexit \
  -DTF_LITE_USE_GLOBAL_MIN \
  -DTF_LITE_USE_GLOBAL_MAX

CCFLAGS += $(PLATFORM_FLAGS)

BUILD_TYPE := micro

LDFLAGS += --specs=nano.specs

# See http://b/158651472 for why memory arena threshold test is disabled.
EXCLUDED_TESTS := \
  $(TENSORFLOW_ROOT)tensorflow/lite/micro/memory_arena_threshold_test.cc

MICROLITE_TEST_SRCS := $(filter-out $(EXCLUDED_TESTS), $(MICROLITE_TEST_SRCS))

# This disables the "linker relaxation" optimization, which produced incorrect code.
# TODO(b/279805615): Check whether this is fixed in newer versions of the toolchain.
LDFLAGS += -mno-relax
TEST_SCRIPT := $(TENSORFLOW_ROOT)tensorflow/lite/micro/testing/test_with_qemu.sh riscv32 rv32
SIZE_SCRIPT := ${TENSORFLOW_ROOT}tensorflow/lite/micro/testing/size_riscv32_binary.sh
RUN_COMMAND := qemu-riscv32 -cpu rv32

include $(MAKEFILE_DIR)/ext_libs/eyalroz_printf.inc
