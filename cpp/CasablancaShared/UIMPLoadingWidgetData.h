// Object: UIMPLoadingWidgetData
// ClassId: 3819
// RuntimeId: 40308
// TypeInfo: 0x0000000144D5F8E0
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../GameShared/UIElementFontEffect.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIMPLoadingWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        CString VideoPlayerIdentifier; // 0x80
        Float32 FadeOutTime; // 0x88
        char pad_0x8C[0x4];
        GameShared::UIElementFontStyle IconLabelFontStyle; // 0x90
        GameShared::UIElementFontEffect IconLabelFontEffect; // 0x98
        Float32 LoadHintUpdateFreq; // 0xA0
        Float32 ScanDelay; // 0xA4
        Float32 ScanSpeed; // 0xA8
        Float32 DistortPowerMin; // 0xAC
        Float32 DistortPowerMax; // 0xB0
        Float32 ScanlineAlphaMin; // 0xB4
        Float32 ScanlineAlphaMax; // 0xB8
        Float32 RedShiftStart; // 0xBC
        Float32 RedShiftEnd; // 0xC0
        Float32 GreenShiftStart; // 0xC4
        Float32 GreenShiftEnd; // 0xC8
        Float32 BlueShiftStart; // 0xCC
        Float32 BlueShiftEnd; // 0xD0
        Float32 OverlayTextFadeInTime; // 0xD4
        Float32 OverlayTextFadeOutTime; // 0xD8
        char pad_0xDC[0x4];
    }; // 0xE0
    static_assert(sizeof(UIMPLoadingWidgetData) == 0xE0);
}
#pragma pack(pop)