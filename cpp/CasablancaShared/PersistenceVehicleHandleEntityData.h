// Object: PersistenceVehicleHandleEntityData
// ClassId: 2942
// RuntimeId: 17849
// TypeInfo: 0x0000000144DA0960
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceVehicleHandleEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PersistenceVehicleHandleEntityData) == 0x28);
}
#pragma pack(pop)