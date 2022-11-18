// Object: RenderFormat
// RuntimeId: 17057
// TypeInfo: 0x0000000144F17C10

namespace Render {
    enum RenderFormat {
        RenderFormat_Unknown = 0,
        RenderFormat_R4G4_UNORM = 1,
        RenderFormat_R4G4B4A4_UNORM = 2,
        RenderFormat_R5G6B5_UNORM = 3,
        RenderFormat_B5G6R5_UNORM = 4,
        RenderFormat_R5G5B5A1_UNORM = 5,
        RenderFormat_R8_UNORM = 6,
        RenderFormat_R8_SNORM = 7,
        RenderFormat_R8_SRGB = 8,
        RenderFormat_R8_UINT = 9,
        RenderFormat_R8_SINT = 10,
        RenderFormat_R8G8_UNORM = 11,
        RenderFormat_R8G8_SNORM = 12,
        RenderFormat_R8G8_SRGB = 13,
        RenderFormat_R8G8_UINT = 14,
        RenderFormat_R8G8_SINT = 15,
        RenderFormat_R8G8B8_UNORM = 16,
        RenderFormat_R8G8B8_SRGB = 17,
        RenderFormat_R8G8B8A8_UNORM = 18,
        RenderFormat_R8G8B8A8_SNORM = 19,
        RenderFormat_R8G8B8A8_SRGB = 20,
        RenderFormat_R8G8B8A8_UINT = 21,
        RenderFormat_R8G8B8A8_SINT = 22,
        RenderFormat_B8G8R8A8_UNORM = 23,
        RenderFormat_B8G8R8A8_SRGB = 24,
        RenderFormat_R10G11B11_FLOAT = 25,
        RenderFormat_R11G11B10_FLOAT = 26,
        RenderFormat_R10G10B10A2_UNORM = 27,
        RenderFormat_R10G10B10A2_UINT = 28,
        RenderFormat_R9G9B9E5_FLOAT = 29,
        RenderFormat_R16_FLOAT = 30,
        RenderFormat_R16_UNORM = 31,
        RenderFormat_R16_SNORM = 32,
        RenderFormat_R16_UINT = 33,
        RenderFormat_R16_SINT = 34,
        RenderFormat_R16G16_FLOAT = 35,
        RenderFormat_R16G16_UNORM = 36,
        RenderFormat_R16G16_SNORM = 37,
        RenderFormat_R16G16_UINT = 38,
        RenderFormat_R16G16_SINT = 39,
        RenderFormat_R16G16B16A16_FLOAT = 40,
        RenderFormat_R16G16B16A16_UNORM = 41,
        RenderFormat_R16G16B16A16_SNORM = 42,
        RenderFormat_R16G16B16A16_UINT = 43,
        RenderFormat_R16G16B16A16_SINT = 44,
        RenderFormat_R32_FLOAT = 45,
        RenderFormat_R32_UINT = 46,
        RenderFormat_R32_SINT = 47,
        RenderFormat_R32G32_FLOAT = 48,
        RenderFormat_R32G32_UINT = 49,
        RenderFormat_R32G32_SINT = 50,
        RenderFormat_R32G32B32A32_FLOAT = 51,
        RenderFormat_R32G32B32A32_UINT = 52,
        RenderFormat_R32G32B32A32_SINT = 53,
        RenderFormat_BC1_UNORM = 54,
        RenderFormat_BC1_SRGB = 55,
        RenderFormat_BC1A_UNORM = 56,
        RenderFormat_BC1A_SRGB = 57,
        RenderFormat_BC2_UNORM = 58,
        RenderFormat_BC2_SRGB = 59,
        RenderFormat_BC3_UNORM = 60,
        RenderFormat_BC3_SRGB = 61,
        RenderFormat_BC4_UNORM = 62,
        RenderFormat_BC5_UNORM = 63,
        RenderFormat_BC6U_FLOAT = 64,
        RenderFormat_BC6S_FLOAT = 65,
        RenderFormat_BC7_UNORM = 66,
        RenderFormat_BC7_SRGB = 67,
        RenderFormat_ETC1_UNORM = 68,
        RenderFormat_ETC1_SRGB = 69,
        RenderFormat_ETC2RGB_UNORM = 70,
        RenderFormat_ETC2RGB_SRGB = 71,
        RenderFormat_ETC2RGBA_UNORM = 72,
        RenderFormat_ETC2RGBA_SRGB = 73,
        RenderFormat_ETC2RGBA1_UNORM = 74,
        RenderFormat_ETC2RGBA1_SRGB = 75,
        RenderFormat_PVRTC1_4BPP_RGBA_UNORM = 76,
        RenderFormat_PVRTC1_4BPP_RGBA_SRGB = 77,
        RenderFormat_PVRTC1_4BPP_RGB_UNORM = 78,
        RenderFormat_PVRTC1_4BPP_RGB_SRGB = 79,
        RenderFormat_PVRTC1_2BPP_RGBA_UNORM = 80,
        RenderFormat_PVRTC1_2BPP_RGBA_SRGB = 81,
        RenderFormat_PVRTC1_2BPP_RGB_UNORM = 82,
        RenderFormat_PVRTC1_2BPP_RGB_SRGB = 83,
        RenderFormat_PVRTC2_4BPP_UNORM = 84,
        RenderFormat_PVRTC2_4BPP_SRGB = 85,
        RenderFormat_PVRTC2_2BPP_UNORM = 86,
        RenderFormat_PVRTC2_2BPP_SRGB = 87,
        RenderFormat_ASTC_4x4_UNORM = 88,
        RenderFormat_ASTC_4x4_SRGB = 89,
        RenderFormat_ASTC_5x4_UNORM = 90,
        RenderFormat_ASTC_5x4_SRGB = 91,
        RenderFormat_ASTC_5x5_UNORM = 92,
        RenderFormat_ASTC_5x5_SRGB = 93,
        RenderFormat_ASTC_6x5_UNORM = 94,
        RenderFormat_ASTC_6x5_SRGB = 95,
        RenderFormat_ASTC_6x6_UNORM = 96,
        RenderFormat_ASTC_6x6_SRGB = 97,
        RenderFormat_ASTC_8x5_UNORM = 98,
        RenderFormat_ASTC_8x5_SRGB = 99,
        RenderFormat_ASTC_8x6_UNORM = 100,
        RenderFormat_ASTC_8x6_SRGB = 101,
        RenderFormat_ASTC_8x8_UNORM = 102,
        RenderFormat_ASTC_8x8_SRGB = 103,
        RenderFormat_ASTC_10x5_UNORM = 104,
        RenderFormat_ASTC_10x5_SRGB = 105,
        RenderFormat_ASTC_10x6_UNORM = 106,
        RenderFormat_ASTC_10x6_SRGB = 107,
        RenderFormat_ASTC_10x8_UNORM = 108,
        RenderFormat_ASTC_10x8_SRGB = 109,
        RenderFormat_ASTC_10x10_UNORM = 110,
        RenderFormat_ASTC_10x10_SRGB = 111,
        RenderFormat_ASTC_12x10_UNORM = 112,
        RenderFormat_ASTC_12x10_SRGB = 113,
        RenderFormat_ASTC_12x12_UNORM = 114,
        RenderFormat_ASTC_12x12_SRGB = 115,
        RenderFormat_D24_UNORM_S8_UINT = 116,
        RenderFormat_D24_FLOAT_S8_UINT = 117,
        RenderFormat_D32_FLOAT_S8_UINT = 118,
        RenderFormat_D16_UNORM = 119,
        RenderFormat_D24_UNORM = 120,
        RenderFormat_D32_FLOAT = 121,
        RenderFormatCount = 122
    };
}