// Object: WallOfDeathEntityData
// ClassId: 3903
// RuntimeId: 26135
// TypeInfo: 0x0000000144C4F7E0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../EffectBase/EffectParameter.h"

#pragma pack(push, 8)
namespace Casablanca {
    class WallOfDeathEntityData : public Entity::EntityData {
        Float32 QuadsPerKm; // 0x20
        char pad_0x24[0x4];
        Array<EffectBase::EffectBlueprint> Effects; // 0x28
        Array<EffectBase::EffectParameter> EffectParameters; // 0x30
        Boolean AutoEnable; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(WallOfDeathEntityData) == 0x40);
}
#pragma pack(pop)