// Object: DakarUIGetFactionsEntityData
// ClassId: 2589
// RuntimeId: 46929
// TypeInfo: 0x0000000144D66570
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarUIGetFactionsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIPlayerObject Player; // 0x28
    }; // 0x30
    static_assert(sizeof(DakarUIGetFactionsEntityData) == 0x30);
}
#pragma pack(pop)