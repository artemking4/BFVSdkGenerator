// Object: AimingSimulationEntityData
// ClassId: 2039
// RuntimeId: 11049
// TypeInfo: 0x0000000144F3A010
#include "../Entity/EntityData.h"
#include "../SoldierShared/SoldierAimingSimulationData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class AimingSimulationEntityData : public Entity::EntityData {
        Array<SoldierShared::SoldierAimingSimulationData> AimingControllers; // 0x20
        Int32 CurrentIndex; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(AimingSimulationEntityData) == 0x30);
}
#pragma pack(pop)