// Object: PlayerAbilityReferenceData
// ClassId: 3954
// RuntimeId: 4342
// TypeInfo: 0x0000000144DE4FF0
#include "../Entity/LogicReferenceObjectData.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/PlayerAbilityAsset.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class PlayerAbilityReferenceData : public Entity::LogicReferenceObjectData {
        Array<DiceShooterShared::PlayerAbilityAsset> AutoCreatePlayerAbilities; // 0xC0
        Boolean AutoCreateAbilities; // 0xC8
        char pad_0xC9[0x7];
    }; // 0xD0
    static_assert(sizeof(PlayerAbilityReferenceData) == 0xD0);
}
#pragma pack(pop)