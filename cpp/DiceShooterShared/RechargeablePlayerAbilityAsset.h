// Object: RechargeablePlayerAbilityAsset
// ClassId: 378
// RuntimeId: 18695
// TypeInfo: 0x0000000144DF85C0
#include "../DiceShooterShared/BasicPlayerAbilityAsset.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class RechargeablePlayerAbilityAsset : public DiceShooterShared::BasicPlayerAbilityAsset {
        Int32 ChargeCount; // 0xC0
        Int32 StartChargeCount; // 0xC4
    }; // 0xC8
    static_assert(sizeof(RechargeablePlayerAbilityAsset) == 0xC8);
}
#pragma pack(pop)