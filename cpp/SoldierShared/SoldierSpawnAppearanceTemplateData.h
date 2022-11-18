// Object: SoldierSpawnAppearanceTemplateData
// ClassId: 736
// RuntimeId: 27916
// TypeInfo: 0x0000000144F42830
#include "../Core/Asset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierSpawnAppearanceTemplateData : public Core::Asset {
        Uint32 Body; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(SoldierSpawnAppearanceTemplateData) == 0x28);
}
#pragma pack(pop)