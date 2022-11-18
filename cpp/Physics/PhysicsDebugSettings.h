// Object: PhysicsDebugSettings
// ClassId: 4418
// RuntimeId: 29886
// TypeInfo: 0x0000000144F0DAC0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Physics {
    class PhysicsDebugSettings : public Core::DataContainer {
        Uint32 TimingRecursionDepth; // 0x18
        Boolean DebugHingeConstraints; // 0x1C
        Boolean UsePhysicsCpuTimers; // 0x1D
        Boolean VDBShowsEffectsWorld; // 0x1E
        Boolean VDBShowsStaticModels; // 0x1F
    }; // 0x20
    static_assert(sizeof(PhysicsDebugSettings) == 0x20);
}
#pragma pack(pop)