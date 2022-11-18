// Object: PlayerFilterEntityData
// ClassId: 3024
// RuntimeId: 8261
// TypeInfo: 0x0000000144E768C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class PlayerFilterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean InvertFilter; // 0x24
        Boolean ForwardToSpectators; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(PlayerFilterEntityData) == 0x28);
}
#pragma pack(pop)