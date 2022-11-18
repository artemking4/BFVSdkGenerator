// Object: WeaponLagEntityData
// ClassId: 3914
// RuntimeId: 29417
// TypeInfo: 0x0000000144F49C40
#include "../Entity/EntityData.h"
#include "../SoldierShared/WeaponLagBinding.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponLagEntityData : public Entity::EntityData {
        SoldierShared::WeaponLagBinding Binding; // 0x20
        Int32 Samples; // 0x84
        Boolean UseAverage; // 0x88
        char pad_0x89[0x7];
    }; // 0x90
    static_assert(sizeof(WeaponLagEntityData) == 0x90);
}
#pragma pack(pop)