// Object: RimeFontConfiguration
// ClassId: 882
// RuntimeId: 38410
// TypeInfo: 0x0000000144F27290
#include "../UI/UIFontConfigurationAssetBase.h"
#include "../RimeShared/RimeFontBundle.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace RimeShared {
    class RimeFontConfiguration : public UI::UIFontConfigurationAssetBase {
        Array<RimeShared::RimeFontBundle> FontBundles; // 0x20
        Int32 FontDpi; // 0x28
        Float32 FontDpiScale; // 0x2C
        Int32 GlyphCacheSize; // 0x30
        Int32 GlyphCacheSizeLowEnd; // 0x34
        Int32 GlyphCachePadding; // 0x38
        char pad_0x3C[0x4];
        Array<Int32> GlyphCacheColumnWidths; // 0x40
        Boolean AutoHinting; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(RimeFontConfiguration) == 0x50);
}
#pragma pack(pop)