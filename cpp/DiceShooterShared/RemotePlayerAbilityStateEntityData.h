// Object: RemotePlayerAbilityStateEntityData
// ClassId: 3014
// RuntimeId: 32426
// TypeInfo: 0x0000000144DF83C0
#include "../DiceShooterShared/PlayerAbilityStateEntityData.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/PlayerAbilityStateTrackMode.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class RemotePlayerAbilityStateEntityData : public DiceShooterShared::PlayerAbilityStateEntityData {
        DiceShooterShared::PlayerAbilityStateTrackMode TrackMode; // 0x30
        Boolean ClearControllableOnExit; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(RemotePlayerAbilityStateEntityData) == 0x38);
}
#pragma pack(pop)