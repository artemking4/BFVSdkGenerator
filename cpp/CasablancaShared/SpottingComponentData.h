// Object: SpottingComponentData
// ClassId: 1853
// RuntimeId: 61840
// TypeInfo: 0x0000000144D35830
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"
#include "../Global/Guid.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class SpottingComponentData : public Entity::GameComponentData {
        Core::Vec3 CrosshairWorldspacePos; // 0x80
        Float32 LookAtFov; // 0x90
        Float32 LookAtDistance; // 0x94
        Float32 ViewUpdateInterval; // 0x98
        Float32 SpottingFov; // 0x9C
        Float32 SpottingDistance; // 0xA0
        Float32 TimeRequiredToPassiveSpot; // 0xA4
        Float32 CoolDownHistoryTime; // 0xA8
        Int32 CoolDownAllowedSpotsWithinHistory; // 0xAC
        Float32 AutoSpottingTimeInterval; // 0xB0
        Float32 ActiveSpottingTargetTimeMultiplier; // 0xB4
        Float32 ActiveSpottingTargetTimeAddition; // 0xB8
        Float32 CrosshairVerticalAngleOffset; // 0xBC
        Float32 KillerSpotTime; // 0xC0
        Guid ActiveSpottingGadgetUnlockGuid; // 0xC4
        Guid PassiveSpottingGadgetUnlockGuid; // 0xD4
        Guid SquadSpottingGadgetUnlockGuid; // 0xE4
        Float32 DistanceForMinPassiveSpotTime; // 0xF4
        Float32 DistanceForMaxPassiveSpotTime; // 0xF8
        Float32 MinPassiveSpotTime; // 0xFC
        Float32 MaxPassiveSpotTime; // 0x100
        Float32 PassiveSpotZoomMultiplier; // 0x104
        Float32 OrderNeedAmmoPercentage; // 0x108
        Float32 OrderHealPercentage; // 0x10C
        Float32 OrderRepairPercentage; // 0x110
        Float32 PickupOrderDistance; // 0x114
        Float32 HealOrderDistance; // 0x118
        Float32 AmmoOrderDistance; // 0x11C
        Float32 RepairOrderDistance; // 0x120
        Float32 LetMeReviveOrderDistance; // 0x124
        Float32 RequestsRadius; // 0x128
        Boolean OnlyAllowedToHaveOneSpottedPlayer; // 0x12C
        Boolean RequireLineOfSight; // 0x12D
        Boolean ActiveSpottingEnabled; // 0x12E
        Boolean PassiveSpottingEnabled; // 0x12F
        Boolean AutoSpottingEnabled; // 0x130
        Boolean UseActiveSquadSpotting; // 0x131
        Boolean UsePassiveSquadSpotting; // 0x132
        Boolean AllowNeutralTargetSpotting; // 0x133
        Boolean CrosshairUseWorldspacePos; // 0x134
        Boolean UseDistanceBasedPassiveSpotting; // 0x135
        Boolean FilterByRequestsRadius; // 0x136
        Boolean ContextualSquadOrderGiving; // 0x137
        Boolean PassiveSpottingSupported; // 0x138
        Boolean SquadSpottingSupported; // 0x139
        char pad_0x13A[0x6];
    }; // 0x140
    static_assert(sizeof(SpottingComponentData) == 0x140);
}
#pragma pack(pop)