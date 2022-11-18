// Object: CustomizationUnlockParts
// ClassId: 1489
// RuntimeId: 7574
// TypeInfo: 0x0000000144E81540
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace GameShared {
    class CustomizationUnlockParts : public Core::DataContainer {
        CString UICategorySid; // 0x18
        Uint32 DefaultSelectionIndex; // 0x20
        char pad_0x24[0x4];
        Array<GameShared::UnlockAssetBase> SelectableUnlocks; // 0x28
    }; // 0x30
    static_assert(sizeof(CustomizationUnlockParts) == 0x30);
}
#pragma pack(pop)