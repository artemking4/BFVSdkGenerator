// Object: AISuspicionData
// ClassId: 284
// RuntimeId: 48182
// TypeInfo: 0x0000000144C05AE0
#include "../Core/DataContainerPolicyAsset.h"
#include "../BattleAIShared/SuspicionState.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AISuspicionData : public Core::DataContainerPolicyAsset {
        Array<BattleAIShared::SuspicionState> States; // 0x20
        Float32 SuspicionPauseBeforeDecrementing; // 0x28
        Float32 TimeToFullyDepleteSuspicion; // 0x2C
    }; // 0x30
    static_assert(sizeof(AISuspicionData) == 0x30);
}
#pragma pack(pop)