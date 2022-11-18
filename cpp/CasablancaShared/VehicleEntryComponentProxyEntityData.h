// Object: VehicleEntryComponentProxyEntityData
// ClassId: 3877
// RuntimeId: 50967
// TypeInfo: 0x0000000144D5B060
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VehicleEntryComponentProxyEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(VehicleEntryComponentProxyEntityData) == 0x28);
}
#pragma pack(pop)