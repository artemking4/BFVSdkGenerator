// Object: BFUIGetTeamPlayersEntityData
// ClassId: 2257
// RuntimeId: 50869
// TypeInfo: 0x0000000144D870A0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetTeamPlayersEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        Boolean UpdateAutomatically; // 0x24
        Boolean OutputForLocalTeam; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(BFUIGetTeamPlayersEntityData) == 0x28);
}
#pragma pack(pop)