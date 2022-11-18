// Object: LocalLocatorComponentProxyEntityData
// ClassId: 3395
// RuntimeId: 2331
// TypeInfo: 0x0000000144DB5A10
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Entity/ComponentData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LocalLocatorComponentProxyEntityData : public Entity::SpatialEntityData {
        Core::LinearTransform LocalTransform; // 0x60
        Core::Realm Realm; // 0xA0
        char pad_0xA4[0x4];
        Entity::ComponentData Parent; // 0xA8
    }; // 0xB0
    static_assert(sizeof(LocalLocatorComponentProxyEntityData) == 0xB0);
}
#pragma pack(pop)