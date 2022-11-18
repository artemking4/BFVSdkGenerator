// Object: GameViewQueryEntityData
// ClassId: 2783
// RuntimeId: 32331
// TypeInfo: 0x0000000144C33870
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace Casablanca {
    class GameViewQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(GameViewQueryEntityData) == 0x28);
}
#pragma pack(pop)