// Object: BFUISoldierArchetypeObjectEntityData
// ClassId: 2388
// RuntimeId: 38334
// TypeInfo: 0x0000000144D853A0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISoldierArchetypeStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierArchetypeObjectEntityData : public Entity::EntityData {
        CasablancaShared::BFUISoldierArchetypeStruct StaticSoldierArchetype; // 0x20
    }; // 0x40
    static_assert(sizeof(BFUISoldierArchetypeObjectEntityData) == 0x40);
}
#pragma pack(pop)