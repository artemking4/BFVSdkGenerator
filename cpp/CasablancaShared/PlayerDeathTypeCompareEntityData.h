// Object: PlayerDeathTypeCompareEntityData
// ClassId: 3018
// RuntimeId: 3583
// TypeInfo: 0x0000000144D5FBE0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/PlayerDeathType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PlayerDeathTypeCompareEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::PlayerDeathType A; // 0x24
        CasablancaShared::PlayerDeathType B; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(PlayerDeathTypeCompareEntityData) == 0x30);
}
#pragma pack(pop)