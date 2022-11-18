// Object: ServerVehicleCustomizationAssetCollectionEntity
// ClassId: 7780
// RuntimeId: 64816
// TypeInfo: 0x0000000144CDFAB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerVehicleCustomizationAssetCollectionEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerVehicleCustomizationAssetCollectionEntity) == 0x30);
}