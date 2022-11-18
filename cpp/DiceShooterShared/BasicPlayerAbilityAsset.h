// Object: BasicPlayerAbilityAsset
// ClassId: 377
// RuntimeId: 62674
// TypeInfo: 0x0000000144DF87C0
#include "../DiceShooterShared/CorrectedPlayerAbilityAsset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../MotionMachineShared/CharacterStateRequiredChannelValueData.h"
#include "../DiceShooterShared/CharacterStateChannelValueData.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class BasicPlayerAbilityAsset : public DiceShooterShared::CorrectedPlayerAbilityAsset {
        Float32 ActiveTime; // 0x88
        Float32 ActivationTime; // 0x8C
        Float32 RechargeTime; // 0x90
        Int32 InputQueueApplyOrder; // 0x94
        Array<MotionMachineShared::CharacterStateRequiredChannelValueData> BlockingChannels; // 0x98
        Array<DiceShooterShared::CharacterStateChannelValueData> SetChannelsWhenActivating; // 0xA0
        Array<DiceShooterShared::CharacterStateChannelValueData> SetChannelsWhenActive; // 0xA8
        Boolean InfiniteActiveTime; // 0xB0
        Boolean RequireHoldDuringActiveTime; // 0xB1
        Boolean InfiniteActivationTime; // 0xB2
        Boolean RequireHoldDuringActivationTime; // 0xB3
        Boolean InfiniteRechargeTime; // 0xB4
        Boolean DisableOnRecharge; // 0xB5
        Boolean DisableOnPlayerExit; // 0xB6
        Boolean DisableOnControllableDeath; // 0xB7
        Boolean RemoveOnDisable; // 0xB8
        Boolean SupportsInputQueue; // 0xB9
        Boolean ActivateWhenButtonIsDown; // 0xBA
        char pad_0xBB[0x5];
    }; // 0xC0
    static_assert(sizeof(BasicPlayerAbilityAsset) == 0xC0);
}
#pragma pack(pop)