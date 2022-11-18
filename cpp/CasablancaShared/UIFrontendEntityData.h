// Object: UIFrontendEntityData
// ClassId: 3706
// RuntimeId: 32531
// TypeInfo: 0x0000000144D216F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/UIStreamInstallGroup.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIFrontendEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::UIStreamInstallGroup> Groups; // 0x28
    }; // 0x30
    static_assert(sizeof(UIFrontendEntityData) == 0x30);
}
#pragma pack(pop)