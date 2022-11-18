// Object: SquadReinforcementOrderEntityData
// ClassId: 3508
// RuntimeId: 45324
// TypeInfo: 0x0000000144D34D30
#include "../Entity/EntityData.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadReinforcementOrderEntityData : public Entity::EntityData {
        Uint32 UnlockIdentifier; // 0x20
        Boolean InformOnlySquadLeader; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(SquadReinforcementOrderEntityData) == 0x28);
}
#pragma pack(pop)