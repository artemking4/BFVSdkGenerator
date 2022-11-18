// Object: UIPlatformEntityData
// ClassId: 3749
// RuntimeId: 25687
// TypeInfo: 0x0000000144D20170
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIPlatformEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIPlatformEntityData) == 0x28);
}
#pragma pack(pop)