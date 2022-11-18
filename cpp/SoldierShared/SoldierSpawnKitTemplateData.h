// Object: SoldierSpawnKitTemplateData
// ClassId: 737
// RuntimeId: 9011
// TypeInfo: 0x0000000144F428B0
#include "../Core/Asset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierSpawnKitTemplateData : public Core::Asset {
        Uint32 Kit; // 0x20
        Uint32 MainGun; // 0x24
    }; // 0x28
    static_assert(sizeof(SoldierSpawnKitTemplateData) == 0x28);
}
#pragma pack(pop)