// Object: RimeTextInputElementData
// ClassId: 3697
// RuntimeId: 61848
// TypeInfo: 0x0000000144F2A020
#include "../RimeElementsShared/RimeElementBaseData.h"
#include "../RimeElementsShared/RimeTextInputStyle.h"
#include "../RimeShared/RimeFontEffect.h"
#include "../RimeShared/RimeHorizontalTextAlignment.h"
#include "../RimeShared/RimeVerticalTextAlignment.h"
#include "../RimeShared/RimeTextInputSecurityMode.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../RimeShared/RimeTextInputKeyboardType.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace RimeElementsShared {
    class RimeTextInputElementData : public RimeElementsShared::RimeElementBaseData {
        RimeElementsShared::RimeTextInputStyle TextStyle; // 0x110
        RimeShared::RimeFontEffect FontEffect; // 0x118
        RimeShared::RimeHorizontalTextAlignment HorizontalAlignment; // 0x120
        RimeShared::RimeVerticalTextAlignment VerticalAlignment; // 0x124
        RimeShared::RimeTextInputSecurityMode SecurityMode; // 0x128
        char pad_0x12C[0x4];
        CString PlaceholderText; // 0x130
        CString DefaultText; // 0x138
        Float32 ScrollPercent; // 0x140
        char pad_0x144[0x4];
        CString KeyboardTitle; // 0x148
        CString KeyboardDescription; // 0x150
        RimeShared::RimeTextInputKeyboardType KeyboardType; // 0x158
        Int32 MaxLength; // 0x15C
        Boolean WordWrap; // 0x160
        Boolean AllowTabs; // 0x161
        Boolean AllowReturns; // 0x162
        Boolean ReadOnly; // 0x163
        Boolean SelectAllOnActivated; // 0x164
        char pad_0x165[0xB];
    }; // 0x170
    static_assert(sizeof(RimeTextInputElementData) == 0x170);
}
#pragma pack(pop)