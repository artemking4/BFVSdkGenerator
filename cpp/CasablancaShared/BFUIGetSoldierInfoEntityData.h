// Object: BFUIGetSoldierInfoEntityData
// ClassId: 2245
// RuntimeId: 1363
// TypeInfo: 0x0000000144D83BA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetSoldierInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIGetSoldierInfoEntityData) == 0x30);
}
#pragma pack(pop)