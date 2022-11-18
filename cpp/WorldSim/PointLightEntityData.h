// Object: PointLightEntityData
// ClassId: 3388
// RuntimeId: 6198
// TypeInfo: 0x0000000144EC2840
#include "../WorldSim/OriginalLocalLightEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PointLightEntityData : public WorldSim::OriginalLocalLightEntityData {
        Float32 Width; // 0xC0
        Float32 TranslucencyAmbient; // 0xC4
        Float32 TranslucencyScale; // 0xC8
        Float32 TranslucencyPower; // 0xCC
        Float32 TranslucencyDistortion; // 0xD0
        char pad_0xD4[0xC];
    }; // 0xE0
    static_assert(sizeof(PointLightEntityData) == 0xE0);
}
#pragma pack(pop)