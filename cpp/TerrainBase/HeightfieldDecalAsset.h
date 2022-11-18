// Object: HeightfieldDecalAsset
// ClassId: 530
// RuntimeId: 53741
// TypeInfo: 0x0000000144EAFB70
#include "../Core/Asset.h"
#include "../Global/ResourceRef.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace TerrainBase {
    class HeightfieldDecalAsset : public Core::Asset {
        Boolean MidPoint128; // 0x20
        char pad_0x21[0x7];
        ResourceRef Resource; // 0x28
    }; // 0x30
    static_assert(sizeof(HeightfieldDecalAsset) == 0x30);
}
#pragma pack(pop)