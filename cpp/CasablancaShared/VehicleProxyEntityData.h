// Object: VehicleProxyEntityData
// ClassId: 3878
// RuntimeId: 26887
// TypeInfo: 0x0000000144D5B0E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VehicleProxyEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(VehicleProxyEntityData) == 0x28);
}
#pragma pack(pop)