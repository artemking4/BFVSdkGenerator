// Object: AimingScaleDataProviderEntityData
// ClassId: 2038
// RuntimeId: 36496
// TypeInfo: 0x0000000144F3A090
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../SoldierShared/AimingScaleData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class AimingScaleDataProviderEntityData : public Entity::EntityData {
        Int32 ScalePriority; // 0x20
        SoldierShared::AimingScaleData AimingScale; // 0x24
        Boolean Enabled; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(AimingScaleDataProviderEntityData) == 0x30);
}
#pragma pack(pop)