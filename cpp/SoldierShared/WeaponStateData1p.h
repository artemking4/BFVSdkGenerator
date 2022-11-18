// Object: WeaponStateData1p
// ClassId: 5698
// RuntimeId: 61005
// TypeInfo: 0x0000000144F42A30
#include "../Core/DataContainer.h"
#include "../SoldierShared/WeaponMesh1p.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponStateData1p : public Core::DataContainer {
        Array<SoldierShared::WeaponMesh1p> WeaponMesh1p; // 0x18
    }; // 0x20
    static_assert(sizeof(WeaponStateData1p) == 0x20);
}
#pragma pack(pop)