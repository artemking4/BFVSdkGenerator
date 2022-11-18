// Object: DestructionCommandEntityData
// ClassId: 2620
// RuntimeId: 3289
// TypeInfo: 0x0000000144E8F360
#include "../Entity/EntityData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace GameShared {
    class DestructionCommandEntityData : public Entity::EntityData {
        Uint32 InstanceCountDestroyedPerFrame; // 0x20
        Uint32 InstanceCountDestroyedPerType; // 0x24
    }; // 0x28
    static_assert(sizeof(DestructionCommandEntityData) == 0x28);
}
#pragma pack(pop)