// Object: BFUIGetSquadEntityData
// ClassId: 2255
// RuntimeId: 63406
// TypeInfo: 0x0000000144D420D0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUITeamObject.h"
#include "../GameShared/SquadId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetSquadEntityData : public Entity::EntityData {
        CasablancaShared::BFUITeamObject Team; // 0x20
        GameShared::SquadId SquadId; // 0x28
        Boolean UpdateAutomatically; // 0x2C
        Boolean OutputLocalSquad; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(BFUIGetSquadEntityData) == 0x30);
}
#pragma pack(pop)