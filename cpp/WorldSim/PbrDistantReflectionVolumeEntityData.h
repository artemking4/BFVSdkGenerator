// Object: PbrDistantReflectionVolumeEntityData
// ClassId: 3432
// RuntimeId: 40702
// TypeInfo: 0x0000000144EC21C0
#include "../WorldSim/PbrGenericBoxReflectionVolumeEntityData.h"
#include "../RenderBase/DistantIBLLocationType.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PbrDistantReflectionVolumeEntityData : public WorldSim::PbrGenericBoxReflectionVolumeEntityData {
        RenderBase::DistantIBLLocationType LocationType; // 0xA0
        char pad_0xA4[0xC];
    }; // 0xB0
    static_assert(sizeof(PbrDistantReflectionVolumeEntityData) == 0xB0);
}
#pragma pack(pop)