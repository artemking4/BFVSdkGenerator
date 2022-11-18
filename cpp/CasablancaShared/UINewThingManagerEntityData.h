// Object: UINewThingManagerEntityData
// ClassId: 3740
// RuntimeId: 6982
// TypeInfo: 0x0000000144D5D8E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingManagerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UINewThingManagerEntityData) == 0x28);
}
#pragma pack(pop)