// Object: VisualEnvironmentEntityData
// ClassId: 3342
// RuntimeId: 11528
// TypeInfo: 0x0000000144EC0D40
#include "../Entity/GameComponentEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../WorldSim/VisualEnvironmentBlendMode.h"

#pragma pack(push, 16)
namespace WorldSim {
    class VisualEnvironmentEntityData : public Entity::GameComponentEntityData {
        Float32 Visibility; // 0x90
        Float32 FutureVisibility; // 0x94
        Int32 Priority; // 0x98
        WorldSim::VisualEnvironmentBlendMode BlendMode; // 0x9C
        Boolean ExplicitPriorityEnable; // 0xA0
        char pad_0xA1[0xF];
    }; // 0xB0
    static_assert(sizeof(VisualEnvironmentEntityData) == 0xB0);
}
#pragma pack(pop)