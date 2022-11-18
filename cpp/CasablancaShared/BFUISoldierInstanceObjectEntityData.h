// Object: BFUISoldierInstanceObjectEntityData
// ClassId: 2393
// RuntimeId: 27351
// TypeInfo: 0x0000000144D851A0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISoldierKitStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierInstanceObjectEntityData : public Entity::EntityData {
        CasablancaShared::BFUISoldierKitStruct StaticSoldierKit; // 0x20
    }; // 0x50
    static_assert(sizeof(BFUISoldierInstanceObjectEntityData) == 0x50);
}
#pragma pack(pop)