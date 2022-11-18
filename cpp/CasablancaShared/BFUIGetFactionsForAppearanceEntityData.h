// Object: BFUIGetFactionsForAppearanceEntityData
// ClassId: 2224
// RuntimeId: 24587
// TypeInfo: 0x0000000144D82FA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIAppearanceObject.h"
#include "../CasablancaShared/BFUIBodyObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetFactionsForAppearanceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIAppearanceObject Appearance; // 0x28
        CasablancaShared::BFUIBodyObject Body; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIGetFactionsForAppearanceEntityData) == 0x38);
}
#pragma pack(pop)