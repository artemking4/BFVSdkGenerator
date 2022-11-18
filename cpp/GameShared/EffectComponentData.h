// Object: EffectComponentData
// ClassId: 1765
// RuntimeId: 41672
// TypeInfo: 0x0000000144E820C0
#include "../Entity/GameComponentData.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../EffectBase/EffectParameter.h"
#include "../GameShared/AnimAttachData.h"

#pragma pack(push, 16)
namespace GameShared {
    class EffectComponentData : public Entity::GameComponentData {
        EffectBase::EffectBlueprint Effect; // 0x80
        Float32 EmitterParameter1; // 0x88
        Float32 EmitterParameter2; // 0x8C
        Float32 EmitterParameter3; // 0x90
        Float32 OverrideHeight; // 0x94
        Int32 MaxInstances; // 0x98
        char pad_0x9C[0x4];
        Array<EffectBase::EffectParameter> EffectParameters; // 0xA0
        GameShared::AnimAttachData Attach; // 0xA8
        Boolean AutoStart; // 0xB0
        Boolean SnapToWaterSurface; // 0xB1
        Boolean IsFirstPerson; // 0xB2
        Boolean UpdateTransformOnPropertyChanged; // 0xB3
        char pad_0xB4[0xC];
    }; // 0xC0
    static_assert(sizeof(EffectComponentData) == 0xC0);
}
#pragma pack(pop)