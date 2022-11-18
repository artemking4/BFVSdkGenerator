// Object: ClientBFCheckedLocalizedStringEntityData
// ClassId: 2846
// RuntimeId: 2584
// TypeInfo: 0x0000000144D02E20
#include "../UIIncubatorShared/LocalizedStringEntityBaseData.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientBFCheckedLocalizedStringEntityData : public UIIncubatorShared::LocalizedStringEntityBaseData {
        UIIncubatorShared::LocalizedStringId DynamicStringId; // 0x30
        CString DebugString; // 0x38
        CString Sid; // 0x40
    }; // 0x48
    static_assert(sizeof(ClientBFCheckedLocalizedStringEntityData) == 0x48);
}
#pragma pack(pop)