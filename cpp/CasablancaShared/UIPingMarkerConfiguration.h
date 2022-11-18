// Object: UIPingMarkerConfiguration
// ClassId: 892
// RuntimeId: 58925
// TypeInfo: 0x0000000144D9B510
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/PingMarkerPadding.h"
#include "../Core/Vec2.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../CasablancaShared/UIPingMarkerAnimationSettings.h"
#include "../CasablancaShared/UIPingMarkerBehavior.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIPingMarkerConfiguration : public Core::Asset {
        Float32 BaseScale; // 0x20
        CasablancaShared::PingMarkerPadding Padding; // 0x24
        Core::Vec2 ContextIconSize; // 0x54
        Core::Vec2 MarkerIconSize; // 0x5C
        Core::Vec2 PlacementDotSize; // 0x64
        Core::Vec2 PlacementAnimSize; // 0x6C
        Core::Vec2 MarkerTextSize; // 0x74
        Float32 PlacementDotSpacing; // 0x7C
        Float32 PlacementAnimSpacing; // 0x80
        Float32 ContextIconSpacing; // 0x84
        Float32 MarkerTextSpacing; // 0x88
        Float32 MinProjectedLookAtRadius; // 0x8C
        Float32 OcclusionPingMarkerAlpha; // 0x90
        char pad_0x94[0x4];
        GameShared::UIElementFontStyle LocationNameFont; // 0x98
        GameShared::UIElementFontStyle DistanceFont; // 0xA0
        CasablancaShared::UIPingMarkerAnimationSettings AnimationSettings; // 0xA8
        CasablancaShared::UIPingMarkerBehavior SelfBehavior; // 0xE8
        char pad_0x154[0x4];
    }; // 0x158
    static_assert(sizeof(UIPingMarkerConfiguration) == 0x158);
}
#pragma pack(pop)