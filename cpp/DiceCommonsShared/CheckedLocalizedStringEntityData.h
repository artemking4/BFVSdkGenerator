// Object: CheckedLocalizedStringEntityData
// ClassId: 2845
// RuntimeId: 1707
// TypeInfo: 0x0000000144DBBD80
#include "../UIIncubatorShared/LocalizedStringEntityBaseData.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class CheckedLocalizedStringEntityData : public UIIncubatorShared::LocalizedStringEntityBaseData {
        UIIncubatorShared::LocalizedStringId DynamicStringId; // 0x30
        CString DebugString; // 0x38
        CString Sid; // 0x40
    }; // 0x48
    static_assert(sizeof(CheckedLocalizedStringEntityData) == 0x48);
}
#pragma pack(pop)