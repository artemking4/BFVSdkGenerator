// Object: WeaponClassSupplyLimit
// ClassId: 5653
// RuntimeId: 5017
// TypeInfo: 0x0000000144F438B0
#include "../Core/DataContainer.h"
#include "../SoldierShared/WeaponClassEnum.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponClassSupplyLimit : public Core::DataContainer {
        SoldierShared::WeaponClassEnum WeaponClass; // 0x18
        Float32 SupplyLimit; // 0x1C
    }; // 0x20
    static_assert(sizeof(WeaponClassSupplyLimit) == 0x20);
}
#pragma pack(pop)