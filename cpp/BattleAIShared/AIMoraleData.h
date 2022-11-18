// Object: AIMoraleData
// ClassId: 283
// RuntimeId: 1286
// TypeInfo: 0x0000000144C12E00
#include "../Core/DataContainerPolicyAsset.h"
#include "../BattleAIShared/MoraleBounds.h"
#include "../BattleAIShared/MoraleRefill.h"
#include "../BattleAIShared/MoraleState.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIMoraleData : public Core::DataContainerPolicyAsset {
        BattleAIShared::MoraleBounds Bounds; // 0x20
        BattleAIShared::MoraleRefill Refill; // 0x28
        Array<BattleAIShared::MoraleState> States; // 0x40
        Boolean StateDecreaseCompromisesCurrentCover; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(AIMoraleData) == 0x50);
}
#pragma pack(pop)