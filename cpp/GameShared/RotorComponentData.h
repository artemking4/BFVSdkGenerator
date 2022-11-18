// Object: RotorComponentData
// ClassId: 1829
// RuntimeId: 22719
// TypeInfo: 0x0000000144E8DA60
#include "../Entity/GameComponentData.h"
#include "../GameShared/RotorModelData.h"
#include "../GameShared/RotationAxis.h"
#include "../Global/Float32.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class RotorComponentData : public Entity::GameComponentData {
        GameShared::RotorModelData LowRpmModel; // 0x80
        GameShared::RotorModelData HighRpmModel; // 0x88
        GameShared::RotationAxis RotationAxis; // 0x90
        Float32 RotationMultiplier; // 0x94
        Float32 ChangeModelRpm; // 0x98
        char pad_0x9C[0x4];
        EffectBase::EffectBlueprint BlowEffect; // 0xA0
        Float32 TriggerGroundEffectHeight; // 0xA8
        Float32 CriticallyDamagedRotationForce; // 0xAC
        Boolean OnlyTriggerBlowEffectInWater; // 0xB0
        Boolean GroundEffectOnTerrainOnly; // 0xB1
        Boolean CriticalDamage; // 0xB2
        char pad_0xB3[0xD];
    }; // 0xC0
    static_assert(sizeof(RotorComponentData) == 0xC0);
}
#pragma pack(pop)