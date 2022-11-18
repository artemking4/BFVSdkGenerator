// Object: UISPLoadingWidgetData
// ClassId: 3833
// RuntimeId: 22292
// TypeInfo: 0x0000000144D5F860
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UISPLoadingWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Float32 FadeOutTime; // 0x80
        Float32 OverlayTextFadeInTime; // 0x84
        Float32 OverlayTextFadeOutTime; // 0x88
        char pad_0x8C[0x4];
        CString GameTipHeaderSID; // 0x90
        Float32 GameTipHeaderLineLength; // 0x98
        Float32 GameTipHeaderLineOffset; // 0x9C
    }; // 0xA0
    static_assert(sizeof(UISPLoadingWidgetData) == 0xA0);
}
#pragma pack(pop)