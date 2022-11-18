// Object: RimeFontStyle
// ClassId: 710
// RuntimeId: 1375
// TypeInfo: 0x0000000144F27190
#include "../RimeShared/RimeFontStyleBase.h"
#include "../RimeShared/RimeFontLookup.h"
#include "../Global/Float32.h"
#include "../Core/Vec4.h"
#include "../RimeShared/RimeFontMetricsOverride.h"
#include "../RimeShared/RimeTextDecoration.h"
#include "../RimeShared/RimeTextCapitalization.h"

#pragma pack(push, 16)
namespace RimeShared {
    class RimeFontStyle : public RimeShared::RimeFontStyleBase {
        Array<RimeShared::RimeFontLookup> FontLookup; // 0x20
        char pad_0x28[0x8];
        Core::Vec4 Color; // 0x30
        Float32 PointSize; // 0x40
        Float32 LetterSpacing; // 0x44
        Float32 LineHeight; // 0x48
        char pad_0x4C[0x4];
        Array<RimeShared::RimeFontMetricsOverride> LanguageOverrides; // 0x50
        RimeShared::RimeTextDecoration Decoration; // 0x58
        RimeShared::RimeTextCapitalization Capitalization; // 0x5C
    }; // 0x60
    static_assert(sizeof(RimeFontStyle) == 0x60);
}
#pragma pack(pop)