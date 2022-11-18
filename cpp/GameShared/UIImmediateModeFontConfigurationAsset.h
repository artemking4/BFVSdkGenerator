// Object: UIImmediateModeFontConfigurationAsset
// ClassId: 883
// RuntimeId: 27662
// TypeInfo: 0x0000000144E95F30
#include "../UI/UIFontConfigurationAssetBase.h"
#include "../GameShared/UIImmediateModeFontBundle.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class UIImmediateModeFontConfigurationAsset : public UI::UIFontConfigurationAssetBase {
        Array<GameShared::UIImmediateModeFontBundle> FontBundles; // 0x20
        Int32 FontDpi; // 0x28
        Int32 GlyphCacheSize; // 0x2C
        Int32 GlyphCacheSizeLowEnd; // 0x30
        Int32 GlyphCachePadding; // 0x34
        Float32 GlyphGeometryPadding; // 0x38
        Boolean GlyphCachePremultipliedAlpha; // 0x3C
        Boolean AutoHinting; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(UIImmediateModeFontConfigurationAsset) == 0x40);
}
#pragma pack(pop)