// Object: VehicleCameraComponentProxyEntityData
// ClassId: 3873
// RuntimeId: 6391
// TypeInfo: 0x0000000144D5AFE0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VehicleCameraComponentProxyEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(VehicleCameraComponentProxyEntityData) == 0x28);
}
#pragma pack(pop)