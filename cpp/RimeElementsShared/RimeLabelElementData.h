// Object: RimeLabelElementData
// ClassId: 3693
// RuntimeId: 58102
// TypeInfo: 0x0000000144F2A420
#include "../RimeElementsShared/RimeElementBaseData.h"
#include "../Global/CString.h"
#include "../RimeShared/RimeFontStyle.h"
#include "../RimeShared/RimeFontEffect.h"
#include "../RimeShared/RimeHorizontalTextAlignment.h"
#include "../RimeShared/RimeVerticalTextAlignment.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace RimeElementsShared {
    class RimeLabelElementData : public RimeElementsShared::RimeElementBaseData {
        CString Text; // 0x110
        RimeShared::RimeFontStyle FontStyle; // 0x118
        RimeShared::RimeFontEffect FontEffect; // 0x120
        RimeShared::RimeHorizontalTextAlignment HorizontalAlignment; // 0x128
        RimeShared::RimeVerticalTextAlignment VerticalAlignment; // 0x12C
        Boolean WordWrap; // 0x130
        Boolean ClipToRect; // 0x131
        char pad_0x132[0xE];
    }; // 0x140
    static_assert(sizeof(RimeLabelElementData) == 0x140);
}
#pragma pack(pop)