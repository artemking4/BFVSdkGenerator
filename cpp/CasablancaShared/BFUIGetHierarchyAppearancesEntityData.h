// Object: BFUIGetHierarchyAppearancesEntityData
// ClassId: 2226
// RuntimeId: 6881
// TypeInfo: 0x0000000144D83620
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIAppearanceInstanceObject.h"
#include "../CasablancaShared/BFUIAppearanceInstanceObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetHierarchyAppearancesEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIAppearanceInstanceObject Root; // 0x28
        CasablancaShared::BFUIAppearanceInstanceObjectList In; // 0x30
        Boolean IncludeRootObject; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(BFUIGetHierarchyAppearancesEntityData) == 0x40);
}
#pragma pack(pop)