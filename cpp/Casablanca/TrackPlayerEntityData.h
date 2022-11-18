// Object: TrackPlayerEntityData
// ClassId: 3451
// RuntimeId: 28354
// TypeInfo: 0x0000000144C336F0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Casablanca/TrackPlayerEntityType.h"
#include "../Global/Uint32.h"
#include "../GameShared/UIWorldIconBehavior.h"
#include "../Global/CString.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 16)
namespace Casablanca {
    class TrackPlayerEntityData : public Entity::SpatialEntityData {
        Float32 SnapHeightOffsetY; // 0x60
        Casablanca::TrackPlayerEntityType TrackPlayerType; // 0x64
        Uint32 UniqueIdHash; // 0x68
        char pad_0x6C[0x4];
        GameShared::UIWorldIconBehavior IconBehavior; // 0x70
        CString IconName; // 0x78
        Float32 ShowTimeOnPickup; // 0x80
        Float32 MaxDistanceToShowByLineOfSight; // 0x84
        Float32 FadeInTime; // 0x88
        Float32 FadeOutTime; // 0x8C
        GameShared::TeamId OwnerTeam; // 0x90
        Float32 Progress; // 0x94
        Boolean RandomizeTracker; // 0x98
        Boolean Enabled; // 0x99
        Boolean SnapHeightOnKilledDestroyed; // 0x9A
        Boolean SnapToExitPointOnVehicleDeath; // 0x9B
        Boolean CheckPlayerAlive; // 0x9C
        Boolean UntrackOnDeath; // 0x9D
        Boolean EnforceSharedCombatArea; // 0x9E
        Boolean UpdateFlagComponent; // 0x9F
        Boolean TrackMultiplePlayers; // 0xA0
        Boolean Reset; // 0xA1
        Boolean AlwaysShowToEnemies; // 0xA2
        Boolean IconVisible; // 0xA3
        char pad_0xA4[0xC];
    }; // 0xB0
    static_assert(sizeof(TrackPlayerEntityData) == 0xB0);
}
#pragma pack(pop)