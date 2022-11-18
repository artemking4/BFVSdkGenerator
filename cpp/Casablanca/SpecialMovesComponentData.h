// Object: SpecialMovesComponentData
// ClassId: 1852
// RuntimeId: 57003
// TypeInfo: 0x0000000144C7E980
#include "../Entity/GameComponentData.h"
#include "../Casablanca/SpecialMoveStateData.h"
#include "../Casablanca/SpecialMoveVaultStateCriteria.h"
#include "../CasablancaShared/SpecialMovesBinding.h"

#pragma pack(push, 16)
namespace Casablanca {
    class SpecialMovesComponentData : public Entity::GameComponentData {
        Casablanca::SpecialMoveStateData VaultOverHighState; // 0x80
        Casablanca::SpecialMoveStateData VaultUpHighState; // 0xC8
        Casablanca::SpecialMoveStateData VaultOverLowState; // 0x110
        Casablanca::SpecialMoveStateData SprintToProneState; // 0x158
        Casablanca::SpecialMoveStateData DeathState; // 0x1A0
        Casablanca::SpecialMoveStateData SpecialAnimationState; // 0x1E8
        Array<Casablanca::SpecialMoveStateData> IndexedDeathStates; // 0x230
        Array<Casablanca::SpecialMoveStateData> IndexedSpecialAnimationStates; // 0x238
        Array<Casablanca::SpecialMoveVaultStateCriteria> IndexedVaultOverHighStates; // 0x240
        Array<Casablanca::SpecialMoveVaultStateCriteria> IndexedVaultUpStates; // 0x248
        Array<Casablanca::SpecialMoveVaultStateCriteria> IndexedVaultOverLowStates; // 0x250
        CasablancaShared::SpecialMovesBinding Binding; // 0x258
    }; // 0x370
    static_assert(sizeof(SpecialMovesComponentData) == 0x370);
}
#pragma pack(pop)