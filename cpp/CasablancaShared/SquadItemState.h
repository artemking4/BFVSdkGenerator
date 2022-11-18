// Object: SquadItemState
// ClassId: 4910
// RuntimeId: 21417
// TypeInfo: 0x0000000144D34FB0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/SquadReinforcementItemState.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadItemState : public Core::DataContainer {
        CasablancaShared::SquadReinforcementItemState CurrentState; // 0x18
        Float32 RemainingStateTime; // 0x1C
        Float32 StateLength; // 0x20
        Int32 InUseCount; // 0x24
        Boolean Enabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SquadItemState) == 0x30);
}
#pragma pack(pop)