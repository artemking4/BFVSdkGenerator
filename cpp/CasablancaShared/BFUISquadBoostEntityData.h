// Object: BFUISquadBoostEntityData
// ClassId: 2403
// RuntimeId: 49786
// TypeInfo: 0x0000000144D41F50
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISquadObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISquadBoostEntityData : public Entity::EntityData {
        CasablancaShared::BFUISquadObject Squad; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUISquadBoostEntityData) == 0x28);
}
#pragma pack(pop)