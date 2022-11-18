// Object: BFUIGetParentAppearanceEntityData
// ClassId: 2233
// RuntimeId: 26154
// TypeInfo: 0x0000000144D835A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetParentAppearanceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIAppearanceInstanceObject In; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIGetParentAppearanceEntityData) == 0x30);
}
#pragma pack(pop)