// Object: BFUICoopModifyLoadoutEntityData
// ClassId: 2175
// RuntimeId: 4612
// TypeInfo: 0x0000000144D806A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICoopModifyLoadoutEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUICoopModifyLoadoutEntityData) == 0x30);
}
#pragma pack(pop)