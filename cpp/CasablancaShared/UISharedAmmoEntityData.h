// Object: UISharedAmmoEntityData
// ClassId: 3764
// RuntimeId: 41518
// TypeInfo: 0x0000000144D208F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISharedAmmoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UISharedAmmoEntityData) == 0x28);
}
#pragma pack(pop)