// Object: BFUISoldierLoadoutObjectEntityData
// ClassId: 2397
// RuntimeId: 63537
// TypeInfo: 0x0000000144D84CA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISoldierLoadoutStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierLoadoutObjectEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierLoadoutStruct StaticSoldierLoadout; // 0x28
    }; // 0xA0
    static_assert(sizeof(BFUISoldierLoadoutObjectEntityData) == 0xA0);
}
#pragma pack(pop)