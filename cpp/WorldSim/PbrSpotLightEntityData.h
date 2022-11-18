// Object: PbrSpotLightEntityData
// ClassId: 3393
// RuntimeId: 17101
// TypeInfo: 0x0000000144EC2540
#include "../WorldSim/PbrAnalyticLightEntityData.h"
#include "../Global/Float32.h"
#include "../WorldBase/IesProfileAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PbrSpotLightEntityData : public WorldSim::PbrAnalyticLightEntityData {
        Float32 DiscRadius; // 0x110
        Float32 InnerAngle; // 0x114
        Float32 OuterAngle; // 0x118
        char pad_0x11C[0x4];
        WorldBase::IesProfileAsset IESProfile; // 0x120
        Float32 IESMultiplier; // 0x128
        Boolean UseIESProfileAsMask; // 0x12C
        char pad_0x12D[0x3];
    }; // 0x130
    static_assert(sizeof(PbrSpotLightEntityData) == 0x130);
}
#pragma pack(pop)