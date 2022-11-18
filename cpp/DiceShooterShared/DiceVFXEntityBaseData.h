// Object: DiceVFXEntityBaseData
// ClassId: 2635
// RuntimeId: 18763
// TypeInfo: 0x0000000144DEE320
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/WSSnapType.h"
#include "../Global/Float32.h"
#include "../DiceCommonsShared/EntityAttachData.h"
#include "../EffectBase/EffectParameter.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class DiceVFXEntityBaseData : public Entity::EntityData {
        DiceShooterShared::WSSnapType Snapping; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform RawTransformEffectLocation; // 0x30
        Float32 OverrideHeight; // 0x70
        char pad_0x74[0x4];
        DiceCommonsShared::EntityAttachData Attach; // 0x78
        Array<EffectBase::EffectParameter> EffectParameters; // 0x80
        Int32 MaxInstances; // 0x88
        Boolean PlayEffect; // 0x8C
        Boolean StayAttached; // 0x8D
        Boolean AllowEffectToStartAsynchronously; // 0x8E
        char pad_0x8F[0x1];
    }; // 0x90
    static_assert(sizeof(DiceVFXEntityBaseData) == 0x90);
}
#pragma pack(pop)