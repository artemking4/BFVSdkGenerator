// Object: SoldierTactics
// ClassId: 389
// RuntimeId: 60572
// TypeInfo: 0x0000000144C12A00
#include "../Core/DataContainerPolicyAsset.h"
#include "../BattleAIShared/AIMoraleData.h"
#include "../BattleAIShared/PickWeaponSettings.h"
#include "../BattleAIShared/WeaponSuppressionSettings.h"
#include "../BattleAIShared/VehicleSuppressionSettings.h"
#include "../BattleAIShared/TargetingData.h"
#include "../BattleAIShared/AIAttackTactic.h"
#include "../BattleAIShared/AIAutoPatrolTactic.h"
#include "../BattleAIShared/AIChargeTactic.h"
#include "../BattleAIShared/AIChaseTactic.h"
#include "../BattleAIShared/AICloseCombatTactic.h"
#include "../BattleAIShared/AIDefendTactic.h"
#include "../BattleAIShared/AIEvadeTactic.h"
#include "../BattleAIShared/AIExecuteActionTactic.h"
#include "../BattleAIShared/AIFleeTactic.h"
#include "../BattleAIShared/AIFollowTactic.h"
#include "../BattleAIShared/AIGadgetTactic.h"
#include "../BattleAIShared/AIHideTactic.h"
#include "../BattleAIShared/AIInvestigateTactic.h"
#include "../BattleAIShared/AIMeleeChargeTactic.h"
#include "../BattleAIShared/AIShelterTactic.h"
#include "../BattleAIShared/AIVehicleTactic.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SoldierTactics : public Core::DataContainerPolicyAsset {
        BattleAIShared::AIMoraleData Morale; // 0x20
        BattleAIShared::PickWeaponSettings PickWeaponSettings; // 0x28
        BattleAIShared::WeaponSuppressionSettings WeaponSuppressionSettings; // 0x30
        BattleAIShared::VehicleSuppressionSettings VehicleSuppressionSettings; // 0x3C
        char pad_0x44[0x4];
        BattleAIShared::TargetingData TargetingSettings; // 0x48
        BattleAIShared::AIAttackTactic Attack; // 0x50
        BattleAIShared::AIAutoPatrolTactic AutoPatrol; // 0x58
        BattleAIShared::AIChargeTactic Charge; // 0x60
        BattleAIShared::AIChaseTactic Chase; // 0x68
        BattleAIShared::AICloseCombatTactic CloseCombat; // 0x70
        BattleAIShared::AIDefendTactic Defend; // 0x78
        BattleAIShared::AIEvadeTactic Evade; // 0x80
        BattleAIShared::AIExecuteActionTactic ExecuteIdleAction; // 0x88
        BattleAIShared::AIExecuteActionTactic ExecuteCombatAction; // 0x90
        BattleAIShared::AIExecuteActionTactic ExecuteSearchAction; // 0x98
        BattleAIShared::AIFleeTactic Flee; // 0xA0
        BattleAIShared::AIFollowTactic Follow; // 0xA8
        BattleAIShared::AIGadgetTactic Gadget; // 0xB0
        BattleAIShared::AIHideTactic Hide; // 0xB8
        BattleAIShared::AIInvestigateTactic CombatInvestigate; // 0xC0
        BattleAIShared::AIInvestigateTactic CombatSearchArea; // 0xC8
        BattleAIShared::AIInvestigateTactic Investigate; // 0xD0
        BattleAIShared::AIMeleeChargeTactic MeleeCharge; // 0xD8
        BattleAIShared::AIInvestigateTactic SearchArea; // 0xE0
        BattleAIShared::AIShelterTactic Shelter; // 0xE8
        BattleAIShared::AIVehicleTactic Vehicle; // 0xF0
    }; // 0xF8
    static_assert(sizeof(SoldierTactics) == 0xF8);
}
#pragma pack(pop)