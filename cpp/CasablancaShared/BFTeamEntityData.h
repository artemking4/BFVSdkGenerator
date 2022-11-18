// Object: BFTeamEntityData
// ClassId: 2149
// RuntimeId: 20133
// TypeInfo: 0x0000000144D5C5E0
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../CasablancaShared/BFTeamData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFTeamEntityData : public Entity::EntityData {
        GameShared::TeamId Id; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::BFTeamData> AvailableTeams; // 0x28
    }; // 0x30
    static_assert(sizeof(BFTeamEntityData) == 0x30);
}
#pragma pack(pop)