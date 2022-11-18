// Object: TeamEntityData
// ClassId: 3552
// RuntimeId: 36909
// TypeInfo: 0x0000000144E77BC0
#include "../Entity/EntityData.h"
#include "../GameShared/TeamData.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace GameShared {
    class TeamEntityData : public Entity::EntityData {
        GameShared::TeamData Team; // 0x20
        GameShared::TeamId Id; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(TeamEntityData) == 0x30);
}
#pragma pack(pop)