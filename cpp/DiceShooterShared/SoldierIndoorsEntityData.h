// Object: SoldierIndoorsEntityData
// ClassId: 3220
// RuntimeId: 59215
// TypeInfo: 0x0000000144DE8910
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SoldierIndoorsEntityData : public Entity::EntityData {
        Float32 IndoorinessThreshold; // 0x20
        Float32 MaterialRatioThreshold; // 0x24
        Float32 Indooriness; // 0x28
        Float32 MaterialRatio; // 0x2C
    }; // 0x30
    static_assert(sizeof(SoldierIndoorsEntityData) == 0x30);
}
#pragma pack(pop)