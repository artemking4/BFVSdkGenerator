// Object: UICreditsWidgetData
// ClassId: 3814
// RuntimeId: 62555
// TypeInfo: 0x0000000144D9B390
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../CasablancaShared/UICreditsElementFormatSingle.h"
#include "../CasablancaShared/UICreditsElementFormatDouble.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UICreditsWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        CasablancaShared::UICreditsElementFormatSingle DefaultFormat; // 0x80
        CasablancaShared::UICreditsElementFormatSingle HeaderFormat; // 0x98
        CasablancaShared::UICreditsElementFormatSingle TitleFormat; // 0xB0
        CasablancaShared::UICreditsElementFormatSingle NameFormat; // 0xC8
        CasablancaShared::UICreditsElementFormatDouble LeadsNameFormat; // 0xE0
        CasablancaShared::UICreditsElementFormatSingle WallOfTextFormat; // 0x108
        Float32 ScrollSpeed; // 0x120
        Float32 SpaceBetweenColumns; // 0x124
        Float32 StartOffset; // 0x128
        Int32 CreditsIndex; // 0x12C
    }; // 0x130
    static_assert(sizeof(UICreditsWidgetData) == 0x130);
}
#pragma pack(pop)