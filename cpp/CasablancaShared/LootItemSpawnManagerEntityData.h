// Object: LootItemSpawnManagerEntityData
// ClassId: 2872
// RuntimeId: 2761
// TypeInfo: 0x0000000144D02220
#include "../Entity/EntityData.h"
#include "../Entity/ObjectBlueprint.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LootItemSpawnManagerEntityData : public Entity::EntityData {
        Entity::ObjectBlueprint LootGroupBlueprint; // 0x20
    }; // 0x28
    static_assert(sizeof(LootItemSpawnManagerEntityData) == 0x28);
}
#pragma pack(pop)