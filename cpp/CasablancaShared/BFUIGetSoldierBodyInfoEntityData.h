// Object: BFUIGetSoldierBodyInfoEntityData
// ClassId: 2243
// RuntimeId: 39644
// TypeInfo: 0x0000000144D83B20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIBodyInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetSoldierBodyInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIBodyInstanceObject Body; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIGetSoldierBodyInfoEntityData) == 0x30);
}
#pragma pack(pop)