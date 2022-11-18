// Object: SpeedEventGateEntityData
// ClassId: 3495
// RuntimeId: 55944
// TypeInfo: 0x0000000144E76EC0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class SpeedEventGateEntityData : public Entity::EntityData {
        Float32 MinSpeed; // 0x20
        Float32 MaxSpeed; // 0x24
    }; // 0x28
    static_assert(sizeof(SpeedEventGateEntityData) == 0x28);
}
#pragma pack(pop)