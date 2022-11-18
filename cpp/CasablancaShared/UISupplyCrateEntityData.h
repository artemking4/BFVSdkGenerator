// Object: UISupplyCrateEntityData
// ClassId: 3776
// RuntimeId: 65328
// TypeInfo: 0x0000000144D211F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISupplyCrateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UISupplyCrateEntityData) == 0x28);
}
#pragma pack(pop)