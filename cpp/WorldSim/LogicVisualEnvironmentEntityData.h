// Object: LogicVisualEnvironmentEntityData
// ClassId: 2853
// RuntimeId: 58582
// TypeInfo: 0x0000000144EC0C40
#include "../Entity/EntityData.h"
#include "../WorldSim/VisualEnvironmentBlueprint.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace WorldSim {
    class LogicVisualEnvironmentEntityData : public Entity::EntityData {
        WorldSim::VisualEnvironmentBlueprint VisualEnvironment; // 0x20
        Float32 Visibility; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(LogicVisualEnvironmentEntityData) == 0x30);
}
#pragma pack(pop)