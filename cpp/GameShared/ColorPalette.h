// Object: ColorPalette
// ClassId: 217
// RuntimeId: 33911
// TypeInfo: 0x0000000144E82C40
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"

#pragma pack(push, 8)
namespace GameShared {
    class ColorPalette : public Core::Asset {
        CString SourcePath; // 0x20
        Array<Core::Vec3> Entries; // 0x28
    }; // 0x30
    static_assert(sizeof(ColorPalette) == 0x30);
}
#pragma pack(pop)