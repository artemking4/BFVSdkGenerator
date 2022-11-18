// Object: BFUISoldierKitObjectEntityData
// ClassId: 2395
// RuntimeId: 36901
// TypeInfo: 0x0000000144D852A0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISoldierKitStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierKitObjectEntityData : public Entity::EntityData {
        CasablancaShared::BFUISoldierKitStruct StaticSoldierKit; // 0x20
    }; // 0x50
    static_assert(sizeof(BFUISoldierKitObjectEntityData) == 0x50);
}
#pragma pack(pop)