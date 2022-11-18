// Object: GameModeCategorizationEntityData
// ClassId: 2777
// RuntimeId: 27205
// TypeInfo: 0x0000000144DA3180
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameModeCategorizationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(GameModeCategorizationEntityData) == 0x28);
}
#pragma pack(pop)