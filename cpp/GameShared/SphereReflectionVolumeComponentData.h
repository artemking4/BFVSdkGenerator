// Object: SphereReflectionVolumeComponentData
// ClassId: 1828
// RuntimeId: 8418
// TypeInfo: 0x0000000144E9AB90
#include "../GameShared/ReflectionVolumeComponentData.h"
#include "../WorldSim/PbrSphereReflectionVolumeEntityData.h"

#pragma pack(push, 16)
namespace GameShared {
    class SphereReflectionVolumeComponentData : public GameShared::ReflectionVolumeComponentData {
        WorldSim::PbrSphereReflectionVolumeEntityData ReflectionVolume; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(SphereReflectionVolumeComponentData) == 0x90);
}
#pragma pack(pop)