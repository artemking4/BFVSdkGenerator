// Object: BFUILoadoutRestrictionInfo
// ClassId: 1221
// RuntimeId: 34599
// TypeInfo: 0x0000000144D4C1F0
#include "../Core/DataContainer.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILoadoutRestrictionInfo : public Core::DataContainer {
        UIIncubatorShared::LocalizedStringId ItemNameSid; // 0x18
        CString Icon; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUILoadoutRestrictionInfo) == 0x28);
}
#pragma pack(pop)