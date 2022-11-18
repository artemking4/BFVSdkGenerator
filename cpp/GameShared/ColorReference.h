// Object: ColorReference
// ClassId: 218
// RuntimeId: 35150
// TypeInfo: 0x0000000144E81D40
#include "../Core/Asset.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace GameShared {
    class ColorReference : public Core::Asset {
        Core::Vec4 Color; // 0x20
    }; // 0x30
    static_assert(sizeof(ColorReference) == 0x30);
}
#pragma pack(pop)