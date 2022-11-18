// Object: CameraBodyPreset
// ClassId: 188
// RuntimeId: 5163
// TypeInfo: 0x0000000144E836C0
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../WorldSim/VisualEnvironmentBlueprint.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraBodyPreset : public Core::Asset {
        Float32 SensorWidth; // 0x20
        Float32 SensorHeight; // 0x24
        WorldSim::VisualEnvironmentBlueprint VisualEnvironment; // 0x28
    }; // 0x30
    static_assert(sizeof(CameraBodyPreset) == 0x30);
}
#pragma pack(pop)