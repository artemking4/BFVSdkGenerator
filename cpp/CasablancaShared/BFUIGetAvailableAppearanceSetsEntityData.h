// Object: BFUIGetAvailableAppearanceSetsEntityData
// ClassId: 2208
// RuntimeId: 27135
// TypeInfo: 0x0000000144D836A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIAppearanceSetObject.h"
#include "../CasablancaShared/BFUIBodyInstanceObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetAvailableAppearanceSetsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIAppearanceSetObject Set; // 0x28
        CasablancaShared::BFUIBodyInstanceObject Body; // 0x30
        Boolean IncludeUnownedObjects; // 0x38
        Boolean ListUnownedObjectsLast; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(BFUIGetAvailableAppearanceSetsEntityData) == 0x40);
}
#pragma pack(pop)