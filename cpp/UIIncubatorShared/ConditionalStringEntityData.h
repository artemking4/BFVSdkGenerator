// Object: ConditionalStringEntityData
// ClassId: 2537
// RuntimeId: 15915
// TypeInfo: 0x0000000144F6E9C0
#include "../UIIncubatorShared/ConditionalStateEntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class ConditionalStringEntityData : public UIIncubatorShared::ConditionalStateEntityData {
        CString ValueIfTrue; // 0x28
        CString ValueIfFalse; // 0x30
    }; // 0x38
    static_assert(sizeof(ConditionalStringEntityData) == 0x38);
}
#pragma pack(pop)