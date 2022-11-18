// Object: DifficultyCategorizationEntityData
// ClassId: 2641
// RuntimeId: 9720
// TypeInfo: 0x0000000144DA3280
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DifficultyCategorizationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(DifficultyCategorizationEntityData) == 0x28);
}
#pragma pack(pop)