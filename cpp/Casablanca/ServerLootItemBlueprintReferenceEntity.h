// Object: ServerLootItemBlueprintReferenceEntity
// ClassId: 8028
// RuntimeId: 49145
// TypeInfo: 0x0000000144C5ECF0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerLootItemBlueprintReferenceEntity : public Entity::SpatialEntity {
        char pad_0x30[0x50];
    }; // 0x80
    static_assert(sizeof(ServerLootItemBlueprintReferenceEntity) == 0x80);
}