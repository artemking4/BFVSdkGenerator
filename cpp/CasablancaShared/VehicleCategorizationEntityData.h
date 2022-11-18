// Object: VehicleCategorizationEntityData
// ClassId: 3874
// RuntimeId: 6533
// TypeInfo: 0x0000000144DA3000
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VehicleCategorizationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(VehicleCategorizationEntityData) == 0x28);
}
#pragma pack(pop)