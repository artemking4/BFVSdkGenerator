// Object: CameraLensPreset
// ClassId: 189
// RuntimeId: 10863
// TypeInfo: 0x0000000144E83640
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../WorldSim/VisualEnvironmentBlueprint.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraLensPreset : public Core::Asset {
        Float32 DefaultFocalLength; // 0x20
        Float32 DefaultLensBreathingScale; // 0x24
        WorldSim::VisualEnvironmentBlueprint VisualEnvironment; // 0x28
    }; // 0x30
    static_assert(sizeof(CameraLensPreset) == 0x30);
}
#pragma pack(pop)