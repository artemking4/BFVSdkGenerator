// Object: BFMapMarkerEntityData
// ClassId: 3261
// RuntimeId: 40632
// TypeInfo: 0x0000000144D4B870
#include "../Entity/SpatialEntityData.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/MapMarkerType.h"
#include "../GameShared/TeamId.h"
#include "../GameShared/UIHudIcon.h"
#include "../GameShared/UIWorldIconBehavior.h"
#include "../Global/Uint32.h"
#include "../Core/Vec3.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFMapMarkerEntityData : public Entity::SpatialEntityData {
        Core::Vec3 BaseTransform; // 0x60
        Core::LinearTransform VisualTransform; // 0x70
        CString Sid; // 0xB0
        CString NameLetter; // 0xB8
        Int32 NrOfPassengers; // 0xC0
        Int32 NrOfEntries; // 0xC4
        Float32 ShowRadius; // 0xC8
        Float32 HideRadius; // 0xCC
        Float32 BlinkTime; // 0xD0
        GameShared::MapMarkerType MarkerType; // 0xD4
        GameShared::TeamId VisibleForTeam; // 0xD8
        GameShared::TeamId OwnerTeam; // 0xDC
        GameShared::UIHudIcon HudIcon; // 0xE0
        char pad_0xE4[0x4];
        CString IconName; // 0xE8
        GameShared::UIWorldIconBehavior IconBehavior; // 0xF0
        Float32 VerticalOffset; // 0xF8
        Float32 FocusPointRadius; // 0xFC
        Int32 FocusPriority; // 0x100
        Float32 ProgressTime; // 0x104
        Float32 Progress; // 0x108
        Uint32 TrackedPlayersInRange; // 0x10C
        Float32 TrackingPlayerRange; // 0x110
        Float32 InstantFlagReturnRadius; // 0x114
        Float32 ProgressPlayerSpeedUpPercentage; // 0x118
        Float32 ProgressTime1Player; // 0x11C
        Float32 ProgressMinTime; // 0x120
        Boolean IsVisible; // 0x124
        Boolean ShowAirTargetBox; // 0x125
        Boolean IsFocusPoint; // 0x126
        Boolean Snap; // 0x127
        Boolean OnlyShowSnapped; // 0x128
        Boolean UseMarkerTransform; // 0x129
        Boolean ServerControlledPosition; // 0x12A
        Boolean PositionStatic; // 0x12B
        Boolean Enabled; // 0x12C
        Boolean ShowDistanceInText; // 0x12D
        Boolean ShowProgress; // 0x12E
        char pad_0x12F[0x1];
    }; // 0x130
    static_assert(sizeof(BFMapMarkerEntityData) == 0x130);
}
#pragma pack(pop)