// Object: TacticBase
// ClassId: 406
// RuntimeId: 46995
// TypeInfo: 0x0000000144C11400
#include "../Core/DataContainerPolicyAsset.h"
#include "../BattleAIShared/AIMoveSettings.h"

namespace BattleAIShared {
    class TacticBase : public Core::DataContainerPolicyAsset {
        BattleAIShared::AIMoveSettings MoveSettings; // 0x20
    }; // 0x28
    static_assert(sizeof(TacticBase) == 0x28);
}