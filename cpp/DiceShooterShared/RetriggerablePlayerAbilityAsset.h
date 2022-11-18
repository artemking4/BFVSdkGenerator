// Object: RetriggerablePlayerAbilityAsset
// ClassId: 379
// RuntimeId: 35077
// TypeInfo: 0x0000000144DF8640
#include "../DiceShooterShared/BasicPlayerAbilityAsset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class RetriggerablePlayerAbilityAsset : public DiceShooterShared::BasicPlayerAbilityAsset {
        Float32 RequireHoldDuringRetriggerTime; // 0xC0
        Int32 RetriggerableCount; // 0xC4
        Float32 RetriggerCooldown; // 0xC8
        Boolean RequireHoldDuringRetrigger; // 0xCC
        Boolean RechargeOnRetriggerCountZero; // 0xCD
        char pad_0xCE[0x2];
    }; // 0xD0
    static_assert(sizeof(RetriggerablePlayerAbilityAsset) == 0xD0);
}
#pragma pack(pop)