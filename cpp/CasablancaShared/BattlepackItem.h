// Object: BattlepackItem
// ClassId: 4143
// RuntimeId: 7252
// TypeInfo: 0x0000000144D98C90
#include "../CasablancaShared/Identifiable.h"
#include "../CasablancaShared/BattlepackItemType.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BattlepackItem : public CasablancaShared::Identifiable {
        CasablancaShared::BattlepackItemType ItemType; // 0x18
        Guid AssetGuid; // 0x1C
        char pad_0x2C[0x4];
        CString Rarity; // 0x30
        Array<Guid> VisualIds; // 0x38
        Array<Guid> WeaponIds; // 0x40
        Guid FeaturedId; // 0x48
        Guid CharacterId; // 0x58
        Guid OfferIdentifier; // 0x68
    }; // 0x78
    static_assert(sizeof(BattlepackItem) == 0x78);
}
#pragma pack(pop)