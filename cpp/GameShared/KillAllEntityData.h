// Object: KillAllEntityData
// ClassId: 2820
// RuntimeId: 13126
// TypeInfo: 0x0000000144E77640
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../GameShared/KillAllPlayerEnum.h"

#pragma pack(push, 8)
namespace GameShared {
    class KillAllEntityData : public Entity::EntityData {
        GameShared::TeamId Team; // 0x20
        GameShared::KillAllPlayerEnum KillPlayers; // 0x24
    }; // 0x28
    static_assert(sizeof(KillAllEntityData) == 0x28);
}
#pragma pack(pop)