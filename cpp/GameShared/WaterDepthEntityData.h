// Object: WaterDepthEntityData
// ClassId: 3481
// RuntimeId: 58282
// TypeInfo: 0x0000000144E76240
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class WaterDepthEntityData : public Entity::SpatialEntityData {
        Core::Realm Realm; // 0x60
        Boolean DefaultEnabled; // 0x64
        char pad_0x65[0xB];
    }; // 0x70
    static_assert(sizeof(WaterDepthEntityData) == 0x70);
}
#pragma pack(pop)