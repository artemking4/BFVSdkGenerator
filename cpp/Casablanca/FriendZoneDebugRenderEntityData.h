// Object: FriendZoneDebugRenderEntityData
// ClassId: 2770
// RuntimeId: 7503
// TypeInfo: 0x0000000144C33970
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace Casablanca {
    class FriendZoneDebugRenderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(FriendZoneDebugRenderEntityData) == 0x28);
}
#pragma pack(pop)