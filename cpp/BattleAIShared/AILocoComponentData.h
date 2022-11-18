// Object: AILocoComponentData
// ClassId: 1786
// RuntimeId: 39435
// TypeInfo: 0x0000000144C13000
#include "../BattleAIShared/IAILocoComponentData.h"
#include "../BattleAIShared/AILocoBinding.h"
#include "../BattleAIShared/AILocoCoverBinding.h"
#include "../BattleAIShared/AISprintStyle.h"
#include "../BattleAIShared/AIVaultData.h"
#include "../BattleAIShared/AILocoCharacterStateBindings.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AILocoComponentData : public BattleAIShared::IAILocoComponentData {
        Core::Vec3 FacingTargetPosition; // 0x80
        BattleAIShared::AILocoBinding Binding; // 0x90
        BattleAIShared::AILocoCoverBinding CoverBinding; // 0x1BC
        BattleAIShared::AISprintStyle SprintStyle; // 0x3D8
        char pad_0x3EC[0x4];
        BattleAIShared::AIVaultData VaultData; // 0x3F0
        BattleAIShared::AILocoCharacterStateBindings CharacterStateBindings; // 0x3F8
        Int32 AnimationEntitySpacePriority; // 0x418
        Float32 WantedYaw; // 0x41C
        Float32 WantedPitch; // 0x420
        Boolean AimWithFifaLoco; // 0x424
        Boolean FetchTargetFromComp; // 0x425
        char pad_0x426[0xA];
    }; // 0x430
    static_assert(sizeof(AILocoComponentData) == 0x430);
}
#pragma pack(pop)