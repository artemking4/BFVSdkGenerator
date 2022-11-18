// Object: BFUIGetRosterItemStatusEntityData
// ClassId: 2241
// RuntimeId: 38047
// TypeInfo: 0x0000000144D82420
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetRosterItemStatusEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString RosterObjectType; // 0x28
        CString ParentObjectType; // 0x30
        Int32 SlotIndex; // 0x38
        Boolean EquippedIncludeChildren; // 0x3C
        Boolean HasValidOffers; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(BFUIGetRosterItemStatusEntityData) == 0x40);
}
#pragma pack(pop)