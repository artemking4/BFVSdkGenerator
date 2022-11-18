// Object: DicePlayVFXEntityData
// ClassId: 2636
// RuntimeId: 34904
// TypeInfo: 0x0000000144DEE2A0
#include "../DiceShooterShared/DiceVFXEntityBaseData.h"
#include "../EffectBase/EffectBlueprint.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class DicePlayVFXEntityData : public DiceShooterShared::DiceVFXEntityBaseData {
        EffectBase::EffectBlueprint Effect; // 0x90
        char pad_0x98[0x8];
    }; // 0xA0
    static_assert(sizeof(DicePlayVFXEntityData) == 0xA0);
}
#pragma pack(pop)