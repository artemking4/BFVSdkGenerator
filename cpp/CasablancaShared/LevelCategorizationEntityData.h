// Object: LevelCategorizationEntityData
// ClassId: 2826
// RuntimeId: 9168
// TypeInfo: 0x0000000144DA3080
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LevelCategorizationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(LevelCategorizationEntityData) == 0x28);
}
#pragma pack(pop)