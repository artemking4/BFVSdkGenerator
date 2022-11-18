// Object: MeleeEntityCommonData
// ClassId: 371
// RuntimeId: 27322
// TypeInfo: 0x0000000144C335F0
#include "../Core/DataContainerPolicyAsset.h"
#include "../Casablanca/CharacterMeleeBinding.h"
#include "../Casablanca/CharacterMeleeCommonBinding.h"
#include "../CasablancaShared/MeleeModifierDirectionData.h"
#include "../Entity/GameplayBones.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/AntEnumeration.h"

#pragma pack(push, 8)
namespace Casablanca {
    class MeleeEntityCommonData : public Core::DataContainerPolicyAsset {
        Casablanca::CharacterMeleeBinding MeleeBinding; // 0x20
        Casablanca::CharacterMeleeCommonBinding MeleeCommonBinding; // 0x84
        CasablancaShared::MeleeModifierDirectionData ProneOnBack; // 0x188
        Entity::GameplayBones AttackerBoneToAttachDefenderConnectBone; // 0x1A8
        Entity::GameplayBones DefenderBackBone; // 0x1AC
        Float32 TriggerDelay; // 0x1B0
        Float32 KillDeadline; // 0x1B4
        Float32 MaxTotalTime; // 0x1B8
        Float32 MaxTotalDistance; // 0x1BC
        Float32 FrontAttackKillDeadline; // 0x1C0
        Float32 DefendKillDeadline; // 0x1C4
        Float32 ReviveDelay; // 0x1C8
        Float32 MeleeEndDelay; // 0x1CC
        Float32 MeleeAttackFrontZone; // 0x1D0
        Float32 MeleeAttackBackZone; // 0x1D4
        Float32 MeleeAttackFrustumAngle; // 0x1D8
        Float32 MeleeAttackDistance; // 0x1DC
        Float32 MaxAttackHeightDifference; // 0x1E0
        Float32 KillDamage; // 0x1E4
        GameShared::AntEnumeration ProneAttackType; // 0x1E8
        GameShared::AntEnumeration CrouchAttackType; // 0x1F0
        GameShared::AntEnumeration ReviveAttackType; // 0x1F8
        Boolean AllowContextualLethalFinish; // 0x200
        Boolean EnableAbortPossibility; // 0x201
        char pad_0x202[0x6];
    }; // 0x208
    static_assert(sizeof(MeleeEntityCommonData) == 0x208);
}
#pragma pack(pop)