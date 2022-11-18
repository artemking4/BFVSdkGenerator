// Object: VisualEnvironmentEffectEntityData
// ClassId: 3284
// RuntimeId: 48030
// TypeInfo: 0x0000000144E44E40
#include "../Entity/ChildEffectEntityData.h"
#include "../WorldSim/VisualEnvironmentBlueprint.h"
#include "../Global/Float32.h"
#include "../Core/Vec4.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameClient {
    class VisualEnvironmentEffectEntityData : public Entity::ChildEffectEntityData {
        Core::Vec4 LifetimeCurve; // 0xA0
        Core::Vec4 CullAngleCurve; // 0xB0
        Core::Vec4 CullDistanceCurve; // 0xC0
        WorldSim::VisualEnvironmentBlueprint VisualEnvironment; // 0xD0
        Float32 Lifetime; // 0xD8
        Boolean SampleOnStartOnly; // 0xDC
        Boolean HideOccluded; // 0xDD
        char pad_0xDE[0x2];
    }; // 0xE0
    static_assert(sizeof(VisualEnvironmentEffectEntityData) == 0xE0);
}
#pragma pack(pop)