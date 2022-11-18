// Object: VehicleBlueprint
// ClassId: 269
// RuntimeId: 3651
// TypeInfo: 0x0000000144E83CC0
#include "../Entity/ObjectBlueprint.h"
#include "../Entity/TimeDeltaType.h"

#pragma pack(push, 8)
namespace GameShared {
    class VehicleBlueprint : public Entity::ObjectBlueprint {
        Entity::TimeDeltaType TimeDeltaType; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(VehicleBlueprint) == 0x58);
}
#pragma pack(pop)