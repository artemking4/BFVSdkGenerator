// Object: SquadVisibilityEntityData
// ClassId: 3512
// RuntimeId: 48131
// TypeInfo: 0x0000000144C32270
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SquadVisibilityEntityData : public Entity::EntityData {
        Float32 MaxDistance; // 0x20
        Float32 MinDistance; // 0x24
        Boolean OutlineOccludedSquadMembers; // 0x28
        Boolean OutlineOccludedSquadMembersInManDown; // 0x29
        Boolean OutlineSquadWhenManDown; // 0x2A
        Boolean OutlineReviversWhenManDown; // 0x2B
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(SquadVisibilityEntityData) == 0x30);
}
#pragma pack(pop)