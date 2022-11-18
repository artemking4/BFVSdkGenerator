// Object: VisualEnvironmentBlueprint
// ClassId: 271
// RuntimeId: 57774
// TypeInfo: 0x0000000144EC0CC0
#include "../Entity/ObjectBlueprint.h"
#include "../Entity/TimeDeltaType.h"

#pragma pack(push, 8)
namespace WorldSim {
    class VisualEnvironmentBlueprint : public Entity::ObjectBlueprint {
        Entity::TimeDeltaType TimeDeltaType; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(VisualEnvironmentBlueprint) == 0x58);
}
#pragma pack(pop)