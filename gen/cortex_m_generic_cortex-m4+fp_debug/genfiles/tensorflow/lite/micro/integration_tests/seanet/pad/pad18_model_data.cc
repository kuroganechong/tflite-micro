#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/pad/pad18_model_data.h"

const unsigned int g_pad18_model_data_size = 816;
alignas(16) const unsigned char g_pad18_model_data[] = {0x1c,0x0,0x0,0x0,0x54,0x46,0x4c,0x33,0x0,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x14,0x0,0x10,0x0,0xc,0x0,0x8,0x0,0x0,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x58,0x0,0x0,0x0,0xe4,0x2,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x64,0xfe,0xff,0xff,0x0,0x0,0x6,0x0,0x8,0x0,0x4,0x0,0x6,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x9c,0xfe,0xff,0xff,0x1,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x18,0xfe,0xff,0xff,0x10,0x0,0x0,0x0,0x50,0x0,0x0,0x0,0x54,0x0,0x0,0x0,0x58,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x14,0x0,0x0,0x0,0x10,0x0,0xc,0x0,0xb,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x16,0xc,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xe8,0xfe,0xff,0xff,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x64,0x1,0x0,0x0,0xcc,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x52,0xff,0xff,0xff,0x0,0x0,0x0,0x1,0x14,0x0,0x0,0x0,0x4c,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x80,0x0,0x0,0x0,0xac,0xfe,0xff,0xff,0x10,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x24,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0xa2,0x1f,0xaa,0x3b,0x1,0x0,0x0,0x0,0x4e,0x1e,0x2a,0x43,0x1,0x0,0x0,0x0,0x22,0xb4,0x6b,0xc1,0x3a,0x0,0x0,0x0,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x31,0x30,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x62,0x61,0x73,0x65,0x5f,0x63,0x6f,0x6e,0x76,0x5f,0x6c,0x61,0x73,0x74,0x2f,0x66,0x72,0x65,0x71,0x5f,0x64,0x69,0x6d,0x5f,0x70,0x61,0x64,0x2f,0x50,0x61,0x64,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0xa6,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x16,0x0,0x1c,0x0,0x18,0x0,0x17,0x0,0x10,0x0,0xc,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x0,0x16,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x18,0x0,0x0,0x0,0x18,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x58,0x0,0x0,0x0,0x4,0x0,0x4,0x0,0x4,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x31,0x30,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x62,0x61,0x73,0x65,0x5f,0x63,0x6f,0x6e,0x76,0x5f,0x66,0x69,0x72,0x73,0x74,0x2f,0x66,0x72,0x65,0x71,0x5f,0x64,0x69,0x6d,0x5f,0x70,0x61,0x64,0x2f,0x50,0x61,0x64,0x2f,0x70,0x61,0x64,0x64,0x69,0x6e,0x67,0x73,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x16,0x0,0x18,0x0,0x14,0x0,0x13,0x0,0x0,0x0,0xc,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x0,0x16,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x1c,0x0,0x0,0x0,0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x90,0x0,0x0,0x0,0xc,0x0,0x14,0x0,0x10,0x0,0xc,0x0,0x8,0x0,0x4,0x0,0xc,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x24,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0xa2,0x1f,0xaa,0x3b,0x1,0x0,0x0,0x0,0x4e,0x1e,0x2a,0x43,0x1,0x0,0x0,0x0,0x22,0xb4,0x6b,0xc1,0x3e,0x0,0x0,0x0,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x31,0x30,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x62,0x61,0x73,0x65,0x5f,0x63,0x6f,0x6e,0x76,0x5f,0x6c,0x61,0x73,0x74,0x2f,0x61,0x63,0x74,0x69,0x76,0x61,0x74,0x69,0x6f,0x6e,0x2f,0x4c,0x65,0x61,0x6b,0x79,0x52,0x65,0x6c,0x75,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0xa0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xc,0x0,0x10,0x0,0xf,0x0,0x0,0x0,0x8,0x0,0x4,0x0,0xc,0x0,0x0,0x0,0x22,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x22};
