// Object: BFUISoldierKitObjectListEntityData
// ClassId: 2396
// RuntimeId: 30991
// TypeInfo: 0x0000000144D85220
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISoldierKitStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierKitObjectListEntityData : public Entity::EntityData {
        Array<CasablancaShared::BFUISoldierKitStruct> StaticSoldierKitList; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUISoldierKitObjectListEntityData) == 0x28);
}
#pragma pack(pop)