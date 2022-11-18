// Object: BFCustomizationUnlockSets
// ClassId: 1194
// RuntimeId: 31388
// TypeInfo: 0x0000000144D5CCE0
#include "../Core/DataContainer.h"
#include "../DiceCommonsShared/BaseSetAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFCustomizationUnlockSets : public Core::DataContainer {
        DiceCommonsShared::BaseSetAsset Set; // 0x18
    }; // 0x20
    static_assert(sizeof(BFCustomizationUnlockSets) == 0x20);
}
#pragma pack(pop)