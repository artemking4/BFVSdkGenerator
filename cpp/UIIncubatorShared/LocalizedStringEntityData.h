// Object: LocalizedStringEntityData
// ClassId: 2847
// RuntimeId: 24964
// TypeInfo: 0x0000000144F6E3C0
#include "../UIIncubatorShared/LocalizedStringEntityBaseData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class LocalizedStringEntityData : public UIIncubatorShared::LocalizedStringEntityBaseData {
        CString Sid; // 0x30
        Boolean IsStringArgument; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(LocalizedStringEntityData) == 0x40);
}
#pragma pack(pop)