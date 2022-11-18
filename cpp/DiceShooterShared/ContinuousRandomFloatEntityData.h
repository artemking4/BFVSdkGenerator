// Object: ContinuousRandomFloatEntityData
// ClassId: 2548
// RuntimeId: 8773
// TypeInfo: 0x0000000144DEE520
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class ContinuousRandomFloatEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 MinValue; // 0x24
        Float32 MaxValue; // 0x28
        Float32 Multiplier; // 0x2C
        Float32 ChangeValueMinTime; // 0x30
        Float32 ChangeValueMaxTime; // 0x34
        Float32 TriggerEventWhenBelowThreshold; // 0x38
        Float32 TriggerEventWhenAboveThreshold; // 0x3C
        Float32 NoiseAmountMin; // 0x40
        Float32 NoiseAmountMax; // 0x44
        Float32 DefaultOutValue; // 0x48
        Int32 UpdateOutputEveryNTick; // 0x4C
        Boolean AlwaysRandomizeMinOrMaxValueOnly; // 0x50
        Boolean OutputThresholdEvents; // 0x51
        Boolean Interpolate; // 0x52
        Boolean UpdateOutWhenMultiplierChange; // 0x53
        Boolean AutoStart; // 0x54
        Boolean TrueRandom; // 0x55
        char pad_0x56[0x2];
    }; // 0x58
    static_assert(sizeof(ContinuousRandomFloatEntityData) == 0x58);
}
#pragma pack(pop)