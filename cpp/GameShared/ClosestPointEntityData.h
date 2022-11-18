// Object: ClosestPointEntityData
// ClassId: 3285
// RuntimeId: 41743
// TypeInfo: 0x0000000144E8F060
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class ClosestPointEntityData : public Entity::SpatialEntityData {
        Core::Realm Realm; // 0x60
        Float32 MaxDistance; // 0x64
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(ClosestPointEntityData) == 0x70);
}
#pragma pack(pop)