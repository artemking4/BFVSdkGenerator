// Object: LocatorEntityData
// ClassId: 3405
// RuntimeId: 48847
// TypeInfo: 0x0000000144EE5AD0
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 16)
namespace Entity {
    class LocatorEntityData : public Entity::SpatialEntityData {
        Core::Realm Realm; // 0x60
        char pad_0x64[0xC];
    }; // 0x70
    static_assert(sizeof(LocatorEntityData) == 0x70);
}
#pragma pack(pop)