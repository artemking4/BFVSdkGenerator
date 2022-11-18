// Object: TeamFilterEntityData
// ClassId: 3553
// RuntimeId: 36705
// TypeInfo: 0x0000000144E76C40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace GameShared {
    class TeamFilterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::TeamId Team; // 0x24
        Boolean InvertFilter; // 0x28
        Boolean GenerateEventForEveryMatchingTeamMember; // 0x29
        Boolean GetTeamFromPlayerEvent; // 0x2A
        Boolean ForwardToSpectators; // 0x2B
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(TeamFilterEntityData) == 0x30);
}
#pragma pack(pop)