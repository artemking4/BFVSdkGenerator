// Object: PLMRestoreGameStateData
// ClassId: 2928
// RuntimeId: 11549
// TypeInfo: 0x0000000144D21B70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PLMRestoreGameStateData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PLMRestoreGameStateData) == 0x28);
}
#pragma pack(pop)