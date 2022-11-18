// Object: PbrSphereLightEntityData
// ClassId: 3392
// RuntimeId: 41891
// TypeInfo: 0x0000000144EC25C0
#include "../WorldSim/PbrAnalyticLightEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../WorldBase/IesProfileAsset.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PbrSphereLightEntityData : public WorldSim::PbrAnalyticLightEntityData {
        Float32 SphereRadius; // 0x110
        char pad_0x114[0x4];
        WorldBase::IesProfileAsset IESProfile; // 0x118
        Float32 IESMultiplier; // 0x120
        Boolean OnlyHempishere; // 0x124
        Boolean UseIESProfileAsMask; // 0x125
        char pad_0x126[0xA];
    }; // 0x130
    static_assert(sizeof(PbrSphereLightEntityData) == 0x130);
}
#pragma pack(pop)