// Object: BFSpectatorSubViewData
// ClassId: 4934
// RuntimeId: 45392
// TypeInfo: 0x0000000144CFB9D0
#include "../GameShared/SpectatorSubViewData.h"
#include "../CasablancaShared/BFSpectatorSubViewInventoryStringAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorSubViewData : public GameShared::SpectatorSubViewData {
        CasablancaShared::BFSpectatorSubViewInventoryStringAsset InventoryAsset; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpectatorSubViewData) == 0x20);
}
#pragma pack(pop)