// Object: VehicleWaterEffectData
// ClassId: 5566
// RuntimeId: 40995
// TypeInfo: 0x0000000144E8D6E0
#include "../Core/DataContainer.h"
#include "../Core/Vec3.h"
#include "../EffectBase/EffectBlueprint.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehicleWaterEffectData : public Core::DataContainer {
        EffectBase::EffectBlueprint Effect; // 0x18
        Core::Vec3 Position; // 0x20
    }; // 0x30
    static_assert(sizeof(VehicleWaterEffectData) == 0x30);
}
#pragma pack(pop)