// Object: SelectedControllableProxyData
// ClassId: 3951
// RuntimeId: 53234
// TypeInfo: 0x0000000144D225F0
#include "../DiceCommonsShared/BlueprintProxyData.h"
#include "../CasablancaShared/CharacterSelectionMethod.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/ControllableSelectionMode.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class SelectedControllableProxyData : public DiceCommonsShared::BlueprintProxyData {
        CasablancaShared::CharacterSelectionMethod SelectionMethod; // 0x110
        CasablancaShared::ControllableSelectionMode SelectionMode; // 0x114
        Boolean AllowEmpty; // 0x118
        Boolean AllowFriendlyOccupied; // 0x119
        Boolean AllowEnemyOccupied; // 0x11A
        char pad_0x11B[0x5];
    }; // 0x120
    static_assert(sizeof(SelectedControllableProxyData) == 0x120);
}
#pragma pack(pop)