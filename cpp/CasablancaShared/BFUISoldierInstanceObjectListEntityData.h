// Object: BFUISoldierInstanceObjectListEntityData
// ClassId: 2394
// RuntimeId: 91
// TypeInfo: 0x0000000144D85120
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISoldierKitStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierInstanceObjectListEntityData : public Entity::EntityData {
        Array<CasablancaShared::BFUISoldierKitStruct> StaticSoldierKitList; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUISoldierInstanceObjectListEntityData) == 0x28);
}
#pragma pack(pop)