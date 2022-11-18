// Object: PlayerCounterEntityData
// ClassId: 3017
// RuntimeId: 2231
// TypeInfo: 0x0000000144D4B4F0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PlayerCounterEntityData : public Entity::EntityData {
        GameShared::TeamId Team; // 0x20
        Core::Realm Realm; // 0x24
        Boolean Enabled; // 0x28
        Boolean OnlyCountOneTeam; // 0x29
        Boolean CountAI; // 0x2A
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(PlayerCounterEntityData) == 0x30);
}
#pragma pack(pop)