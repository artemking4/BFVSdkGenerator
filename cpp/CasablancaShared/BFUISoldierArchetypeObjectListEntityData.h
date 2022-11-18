// Object: BFUISoldierArchetypeObjectListEntityData
// ClassId: 2389
// RuntimeId: 23003
// TypeInfo: 0x0000000144D85320
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISoldierArchetypeStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierArchetypeObjectListEntityData : public Entity::EntityData {
        Array<CasablancaShared::BFUISoldierArchetypeStruct> StaticSoldierArchetypeList; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUISoldierArchetypeObjectListEntityData) == 0x28);
}
#pragma pack(pop)