// Object: PlayerEventConversionEntityData
// ClassId: 3020
// RuntimeId: 7188
// TypeInfo: 0x0000000144C31470
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace Casablanca {
    class PlayerEventConversionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PlayerEventConversionEntityData) == 0x28);
}
#pragma pack(pop)