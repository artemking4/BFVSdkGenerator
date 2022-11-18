// Object: BFSpectatorInputModifierLayoutAsset
// ClassId: 160
// RuntimeId: 42409
// TypeInfo: 0x0000000144D42450
#include "../Core/Asset.h"
#include "../GameShared/InputActionMapSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorInputModifierLayoutAsset : public Core::Asset {
        GameShared::InputActionMapSlot DefaultSlot; // 0x20
        GameShared::InputActionMapSlot Modifier1Slot; // 0x24
        GameShared::InputActionMapSlot Modifier2Slot; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(BFSpectatorInputModifierLayoutAsset) == 0x30);
}
#pragma pack(pop)