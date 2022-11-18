// Object: SelectedCharacterProxyData
// ClassId: 3950
// RuntimeId: 49644
// TypeInfo: 0x0000000144D22670
#include "../DiceCommonsShared/CharacterProxyData.h"
#include "../CasablancaShared/CharacterSelectionMethod.h"
#include "../CasablancaShared/CharacterSelectionType.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class SelectedCharacterProxyData : public DiceCommonsShared::CharacterProxyData {
        CasablancaShared::CharacterSelectionMethod SelectionMethod; // 0x120
        CasablancaShared::CharacterSelectionType SelectionType; // 0x124
        char pad_0x128[0x8];
    }; // 0x130
    static_assert(sizeof(SelectedCharacterProxyData) == 0x130);
}
#pragma pack(pop)