// Object: UINametagConfiguration
// ClassId: 889
// RuntimeId: 30631
// TypeInfo: 0x0000000144D9B590
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Core/Vec2.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../GameShared/UIElementFontEffect.h"
#include "../CasablancaShared/UINametagMark.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UINametagBehavior.h"
#include "../CasablancaShared/UISupplyCrateBehavior.h"
#include "../CasablancaShared/UIManDown.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINametagConfiguration : public Core::Asset {
        Float32 VerticalSoldierOffset; // 0x20
        Float32 BackgroundOpacity; // 0x24
        Float32 BackgroundScale; // 0x28
        Float32 TextGradientOpacity; // 0x2C
        Core::Vec2 TextGradientScale; // 0x30
        Float32 AnchorBaseScale; // 0x38
        Float32 KitIconBaseScale; // 0x3C
        Float32 SmallIconScale; // 0x40
        char pad_0x44[0x4];
        GameShared::UIElementFontStyle NameFont; // 0x48
        GameShared::UIElementFontEffect NameEffect; // 0x50
        Float32 NameTagAARampWidth; // 0x58
        Core::Vec2 NameTagTextMargin; // 0x5C
        Float32 NameTagMinWidth; // 0x64
        Float32 NameTagFadeOutTime; // 0x68
        char pad_0x6C[0x4];
        Array<CasablancaShared::UINametagMark> NameTagMarks; // 0x70
        GameShared::UIElementFontStyle DistanceFont; // 0x78
        GameShared::UIElementFontEffect DistanceEffect; // 0x80
        Float32 CircularBarScale; // 0x88
        Float32 SpottedBlinkRate; // 0x8C
        Float32 SpottedMinAlpha; // 0x90
        Float32 MapIconMinHeightThreshold; // 0x94
        Float32 MapIconMaxHeightThreshold; // 0x98
        Float32 MapIconMinScale; // 0x9C
        Float32 MapIconMinOpacity; // 0xA0
        Float32 MapIconMaxScale; // 0xA4
        CasablancaShared::UINametagBehavior SelfBehavior; // 0xA8
        CasablancaShared::UINametagBehavior FriendlySquadBehavior; // 0x130
        CasablancaShared::UINametagBehavior FriendlySquadVehicleBehavior; // 0x1B8
        CasablancaShared::UINametagBehavior FriendlyBehavior; // 0x240
        CasablancaShared::UINametagBehavior FriendlySupplierBehavior; // 0x2C8
        CasablancaShared::UINametagBehavior FriendlySquadLeaderBehavior; // 0x350
        CasablancaShared::UINametagBehavior FriendlyVehicleBehavior; // 0x3D8
        CasablancaShared::UINametagBehavior FriendlyStationaryVehicleBehavior; // 0x460
        CasablancaShared::UINametagBehavior FriendlyGadgetBehavior; // 0x4E8
        CasablancaShared::UISupplyCrateBehavior SupplyCrateBehavior; // 0x570
        char pad_0x574[0x4];
        CasablancaShared::UINametagBehavior NeutralBehavior; // 0x578
        CasablancaShared::UINametagBehavior EnemyBehavior; // 0x600
        CasablancaShared::UINametagBehavior EnemyVehicleBehavior; // 0x688
        CasablancaShared::UINametagBehavior EnemyStationaryVehicleBehavior; // 0x710
        CasablancaShared::UINametagBehavior EnemyGadgetBehavior; // 0x798
        CasablancaShared::UINametagBehavior SpottedEnemyBehavior; // 0x820
        CasablancaShared::UINametagBehavior SpottedEnemyVehicleBehavior; // 0x8A8
        CasablancaShared::UINametagBehavior SpottedEnemyStationaryVehicleBehavior; // 0x930
        CasablancaShared::UINametagBehavior SpottedEnemyGadgetBehavior; // 0x9B8
        CasablancaShared::UINametagBehavior InAirplaneSpottedEnemyBehavior; // 0xA40
        CasablancaShared::UINametagBehavior InAirplaneSpottedEnemyVehicleBehavior; // 0xAC8
        CasablancaShared::UINametagBehavior InAirplaneSpottedStationaryVehicleBehavior; // 0xB50
        CasablancaShared::UINametagBehavior InAirplaneSpottedGadgetBehavior; // 0xBD8
        CasablancaShared::UINametagBehavior KillerSpottedEnemyBehavior; // 0xC60
        CasablancaShared::UINametagBehavior UnconfirmedSpottedEnemyBehavior; // 0xCE8
        CasablancaShared::UINametagBehavior SpectatorBehavior; // 0xD70
        CasablancaShared::UINametagBehavior ManDownBehavior; // 0xDF8
        CasablancaShared::UINametagBehavior ManDownTaggedBehavior; // 0xE80
        Float32 ActiveBlinkRate; // 0xF08
        Float32 FadeInTime; // 0xF0C
        Float32 FadeOutTime; // 0xF10
        Float32 PotentialTargetOpacity; // 0xF14
        Core::Vec2 HealthbarSize; // 0xF18
        Float32 HealthbarOpacity; // 0xF20
        Float32 HealthbarBackgroundOpacity; // 0xF24
        Float32 ElementOffset; // 0xF28
        CasablancaShared::UIManDown ManDown; // 0xF2C
        Boolean DimIconsAbove; // 0xF58
        Boolean DimIconsBelow; // 0xF59
        Boolean ScaleUpIconsAbove; // 0xF5A
        Boolean DrawAlternatePlayerIcon; // 0xF5B
        Boolean HideNametagOnVehicleForSelf; // 0xF5C
        char pad_0xF5D[0x3];
    }; // 0xF60
    static_assert(sizeof(UINametagConfiguration) == 0xF60);
}
#pragma pack(pop)