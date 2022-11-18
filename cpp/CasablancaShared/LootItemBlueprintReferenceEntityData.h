// Object: LootItemBlueprintReferenceEntityData
// ClassId: 3411
// RuntimeId: 32097
// TypeInfo: 0x0000000144D022A0
#include "../Entity/SpatialEntityData.h"
#include "../Entity/PrefabBlueprint.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class LootItemBlueprintReferenceEntityData : public Entity::SpatialEntityData {
        Entity::PrefabBlueprint LootBlueprint; // 0x60
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(LootItemBlueprintReferenceEntityData) == 0x70);
}
#pragma pack(pop)