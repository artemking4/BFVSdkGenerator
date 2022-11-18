// Object: CustomizeBaseEntityData
// ClassId: 2565
// RuntimeId: 50941
// TypeInfo: 0x0000000144E767C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace GameShared {
    class CustomizeBaseEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(CustomizeBaseEntityData) == 0x28);
}
#pragma pack(pop)