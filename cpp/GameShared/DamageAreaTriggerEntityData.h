// Object: DamageAreaTriggerEntityData
// ClassId: 3463
// RuntimeId: 19317
// TypeInfo: 0x0000000144E8EAE0
#include "../GameShared/TriggerEntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/DamageAreaCharacterPoseOverride.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Float32.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 16)
namespace GameShared {
    class DamageAreaTriggerEntityData : public GameShared::TriggerEntityData {
        Array<GameShared::DamageAreaCharacterPoseOverride> CharacterPoseOverrides; // 0x70
        Entity::MaterialDecl DamageMaterial; // 0x78
        Float32 DamagePerSecond; // 0x7C
        Float32 DamageTime; // 0x80
        GameShared::TeamId TeamOfImmortalCharacters; // 0x84
        Boolean DamageCharacters; // 0x88
        Boolean DamageVehicles; // 0x89
        Boolean DamageBangers; // 0x8A
        Boolean ExcludeImmortalCharactersInTeam; // 0x8B
        Boolean ExcludeShieldedSoldiers; // 0x8C
        Boolean IsNeverTriggeredByPlayer; // 0x8D
        char pad_0x8E[0x2];
    }; // 0x90
    static_assert(sizeof(DamageAreaTriggerEntityData) == 0x90);
}
#pragma pack(pop)