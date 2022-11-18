// Object: UIMetadataBlueprintEntity
// ClassId: 8049
// RuntimeId: 42209
// TypeInfo: 0x0000000144CB67D0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class UIMetadataBlueprintEntity : public Entity::SpatialEntity {
        char pad_0x30[0x60];
    }; // 0x90
    static_assert(sizeof(UIMetadataBlueprintEntity) == 0x90);
}