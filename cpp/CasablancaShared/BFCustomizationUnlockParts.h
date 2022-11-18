// Object: BFCustomizationUnlockParts
// ClassId: 1193
// RuntimeId: 51858
// TypeInfo: 0x0000000144D4C9F0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/CustomizationSlotType.h"
#include "../Core/LinearTransform.h"
#include "../Global/Uint32.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFCustomizationUnlockParts : public Core::DataContainer {
        CasablancaShared::CustomizationSlotType Slot; // 0x18
        Uint32 DefaultSelectionIndex; // 0x1C
        Core::LinearTransform CustomizationLookAt; // 0x20
        Array<GameShared::UnlockAssetBase> SelectableUnlocks; // 0x60
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(BFCustomizationUnlockParts) == 0x70);
}
#pragma pack(pop)