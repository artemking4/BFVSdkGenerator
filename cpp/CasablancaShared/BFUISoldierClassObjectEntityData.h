// Object: BFUISoldierClassObjectEntityData
// ClassId: 2390
// RuntimeId: 8191
// TypeInfo: 0x0000000144D854A0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISoldierClassStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierClassObjectEntityData : public Entity::EntityData {
        CasablancaShared::BFUISoldierClassStruct StaticSoldierClass; // 0x20
    }; // 0x30
    static_assert(sizeof(BFUISoldierClassObjectEntityData) == 0x30);
}
#pragma pack(pop)