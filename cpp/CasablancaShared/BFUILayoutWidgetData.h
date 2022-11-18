// Object: BFUILayoutWidgetData
// ClassId: 3796
// RuntimeId: 14519
// TypeInfo: 0x0000000144D97910
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUILayoutWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Boolean AutoSizeWidgetHorizontally; // 0x80
        Boolean AutoSizeWidgetVertically; // 0x81
        char pad_0x82[0xE];
    }; // 0x90
    static_assert(sizeof(BFUILayoutWidgetData) == 0x90);
}
#pragma pack(pop)