// Object: BoxReflectionVolumeComponentData
// ClassId: 1827
// RuntimeId: 51106
// TypeInfo: 0x0000000144E9AC10
#include "../GameShared/ReflectionVolumeComponentData.h"
#include "../WorldSim/PbrBoxReflectionVolumeEntityData.h"

#pragma pack(push, 16)
namespace GameShared {
    class BoxReflectionVolumeComponentData : public GameShared::ReflectionVolumeComponentData {
        WorldSim::PbrBoxReflectionVolumeEntityData ReflectionVolume; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(BoxReflectionVolumeComponentData) == 0x90);
}
#pragma pack(pop)