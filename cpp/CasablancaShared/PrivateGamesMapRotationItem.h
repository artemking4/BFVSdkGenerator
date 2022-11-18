// Object: PrivateGamesMapRotationItem
// ClassId: 4466
// RuntimeId: 6547
// TypeInfo: 0x0000000144D6DB30
#include "../Core/DataContainer.h"
#include "../CasablancaShared/PrivateGamesMapRotationItemType.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesMapRotationItem : public Core::DataContainer {
        CasablancaShared::PrivateGamesMapRotationItemType ItemType; // 0x18
        char pad_0x1C[0x4];
        CString Name; // 0x20
        UIIncubatorShared::LocalizedString LocalizedName; // 0x28
    }; // 0x30
    static_assert(sizeof(PrivateGamesMapRotationItem) == 0x30);
}
#pragma pack(pop)