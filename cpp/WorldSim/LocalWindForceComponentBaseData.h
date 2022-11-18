// Object: LocalWindForceComponentBaseData
// ClassId: 1795
// RuntimeId: 60291
// TypeInfo: 0x0000000144EC0AC0
#include "../Entity/GameComponentData.h"
#include "../Core/FloatCurve.h"
#include "../Global/Float32.h"
#include "../WorldSim/ForceGroupAsset.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LocalWindForceComponentBaseData : public Entity::GameComponentData {
        Core::FloatCurve StrengthInputCurve; // 0x80
        Float32 Strength; // 0x88
        Float32 Variation; // 0x8C
        Float32 VariationRate; // 0x90
        Float32 MicroVariation; // 0x94
        Float32 Hardness; // 0x98
        Float32 ForceAsInstantVelocity; // 0x9C
        WorldSim::ForceGroupAsset ForceGroup; // 0xA0
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(LocalWindForceComponentBaseData) == 0xB0);
}
#pragma pack(pop)