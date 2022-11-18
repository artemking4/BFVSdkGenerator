// Object: AttachableFlameEntityData
// ClassId: 3313
// RuntimeId: 16267
// TypeInfo: 0x0000000144D401D0
#include "../WeaponShared/ProjectileEntityData.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/DOTGiverComponentData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class AttachableFlameEntityData : public WeaponShared::ProjectileEntityData {
        EffectBase::EffectBlueprint Effect; // 0xF0
        Float32 NormalOffset; // 0xF8
        Float32 TimeToLiveDeviation; // 0xFC
        CasablancaShared::DOTGiverComponentData DamageOverTime; // 0x100
        char pad_0x108[0x8];
    }; // 0x110
    static_assert(sizeof(AttachableFlameEntityData) == 0x110);
}
#pragma pack(pop)