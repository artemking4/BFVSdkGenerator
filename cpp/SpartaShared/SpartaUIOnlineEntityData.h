// Object: SpartaUIOnlineEntityData
// ClassId: 3246
// RuntimeId: 34871
// TypeInfo: 0x0000000144F4F740
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaUIOnlineEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(SpartaUIOnlineEntityData) == 0x28);
}
#pragma pack(pop)