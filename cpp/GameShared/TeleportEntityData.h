// Object: TeleportEntityData
// ClassId: 3562
// RuntimeId: 52070
// TypeInfo: 0x0000000144E765C0
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class TeleportEntityData : public Entity::EntityData {
        Boolean CheckBelowGround; // 0x20
        char pad_0x21[0xF];
        Core::LinearTransform NewPositionTransform; // 0x30
    }; // 0x70
    static_assert(sizeof(TeleportEntityData) == 0x70);
}
#pragma pack(pop)