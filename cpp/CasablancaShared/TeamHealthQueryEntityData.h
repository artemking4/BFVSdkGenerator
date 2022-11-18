// Object: TeamHealthQueryEntityData
// ClassId: 3554
// RuntimeId: 15554
// TypeInfo: 0x0000000144D5C860
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class TeamHealthQueryEntityData : public Entity::EntityData {
        GameShared::TeamId Team; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(TeamHealthQueryEntityData) == 0x28);
}
#pragma pack(pop)