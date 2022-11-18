// Object: PlayerLookAtEntityData
// ClassId: 3030
// RuntimeId: 46864
// TypeInfo: 0x0000000144F45B30
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class PlayerLookAtEntityData : public Entity::EntityData {
        Boolean IsTracking; // 0x20
        Boolean LookAtSoldier; // 0x21
        char pad_0x22[0xE];
        Core::LinearTransform TargetTransform; // 0x30
    }; // 0x70
    static_assert(sizeof(PlayerLookAtEntityData) == 0x70);
}
#pragma pack(pop)