// Object: BFUnlockAsset
// ClassId: 440
// RuntimeId: 43585
// TypeInfo: 0x0000000144CFB6D0
#include "../GameShared/UnlockAsset.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/InventoryType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUnlockAsset : public GameShared::UnlockAsset {
        Array<Uint32> CompatibilityIdentifiers; // 0x58
        CasablancaShared::InventoryType InventoryType; // 0x60
        Uint32 ZoomLevelStandard; // 0x64
        Uint32 ZoomLevelToggled; // 0x68
        Boolean UseListAsExclusion; // 0x6C
        char pad_0x6D[0x3];
    }; // 0x70
    static_assert(sizeof(BFUnlockAsset) == 0x70);
}
#pragma pack(pop)