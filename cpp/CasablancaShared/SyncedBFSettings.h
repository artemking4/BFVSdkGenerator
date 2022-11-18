// Object: SyncedBFSettings
// ClassId: 5029
// RuntimeId: 56238
// TypeInfo: 0x0000000144D310A0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/ServerTypeValues.h"
#include "../CasablancaShared/ServerModeValues.h"
#include "../CasablancaShared/DeployDurations.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SyncedBFSettings : public Core::SystemSettings {
        Float32 TicketCountScale; // 0x20
        Float32 RoundTimeLimit; // 0x24
        CString JesusModeForPlayerTag; // 0x28
        CString JesusModeForPlayers; // 0x30
        Int32 Team1Faction; // 0x38
        Int32 Team2Faction; // 0x3C
        Int32 Team3Faction; // 0x40
        Int32 Team4Faction; // 0x44
        Int32 Team5Faction; // 0x48
        Int32 Team6Faction; // 0x4C
        Uint32 CommanderSize; // 0x50
        char pad_0x54[0x4];
        CString FieldSpecLevels; // 0x58
        CasablancaShared::ServerTypeValues ServerType; // 0x60
        CasablancaShared::ServerModeValues ServerMode; // 0x64
        Float32 HighLatency; // 0x68
        Float32 CriticalLatency; // 0x6C
        Float32 HighLatencyVariation; // 0x70
        Float32 CriticalLatencyVariation; // 0x74
        Float32 HighPacketLossRatio; // 0x78
        Float32 CriticalPacketLossRatio; // 0x7C
        Float32 LowMonitorRefresh; // 0x80
        Float32 LowClientFps; // 0x84
        Float32 BadExperienceIconsHoldTime; // 0x88
        Float32 ServerFpsLowThresholdPerc; // 0x8C
        Float32 ServerFpsLowThresholdCritPerc; // 0x90
        Int32 WeatherSequencerState; // 0x94
        CString ServerOfficialExperienceId; // 0x98
        Int32 AirAssaultNoneCategoryScore; // 0xA0
        Int32 AirAssaultSmallCategoryScore; // 0xA4
        Int32 AirAssaultMediumCategoryScore; // 0xA8
        Int32 AirAssaultLargeCategoryScore; // 0xAC
        Int32 AirAssaultExtraLargeCategoryScore; // 0xB0
        Int32 AirAssaultBehemothCategoryScore; // 0xB4
        Int32 AirAssaultBehemothDamagedScore; // 0xB8
        Int32 AirAssaultInitialScoreTeam1; // 0xBC
        Int32 AirAssaultInitialScoreTeam2; // 0xC0
        Int32 AirAssaultDogfightingTargetScore; // 0xC4
        Int32 AirAssaultSingleBehemothTargetScore; // 0xC8
        Int32 AirAssaultDoubleBehemothTargetScore; // 0xCC
        CasablancaShared::DeployDurations DeployDurations; // 0xD0
        Boolean EnableMinimap; // 0xDC
        Boolean NoHud; // 0xDD
        Boolean EnableMinimapSpotting; // 0xDE
        Boolean Enable3dSpotting; // 0xDF
        Boolean EnablePassive3dSpotting; // 0xE0
        Boolean EnableRadar3dSpotting; // 0xE1
        Boolean EnableKillerSpotting; // 0xE2
        Boolean EnableUnconfirmedSpotting; // 0xE3
        Boolean EnableNameTag; // 0xE4
        Boolean EnableHardCoreNametags; // 0xE5
        Boolean EnableLandVehicles; // 0xE6
        Boolean EnableAirVehicles; // 0xE7
        Boolean EnableHorses; // 0xE8
        Boolean EnableMeleeWeapons; // 0xE9
        Boolean EnableShotguns; // 0xEA
        Boolean EnableHandguns; // 0xEB
        Boolean EnableExplosives; // 0xEC
        Boolean EnableLightMachineGun; // 0xED
        Boolean EnableSubMachineGun; // 0xEE
        Boolean EnableSemiAutoRifle; // 0xEF
        Boolean EnableSingleActionRifle; // 0xF0
        Boolean EnableGadgets; // 0xF1
        Boolean EnableWeaponsForAll; // 0xF2
        Boolean EnableBoltActionCarbines; // 0xF3
        Boolean EnablePistolCarbines; // 0xF4
        Boolean EnableMediumMachineGuns; // 0xF5
        Boolean EnableAntiMaterielRifles; // 0xF6
        Boolean EnableAssaultRifles; // 0xF7
        Boolean EnableSelfLoadingRifles; // 0xF8
        Boolean EnableAntiVehicleLaunchers; // 0xF9
        Boolean EnableAntiInfantryLaunchers; // 0xFA
        Boolean EnableAmmoSupplyGadgets; // 0xFB
        Boolean EnableHealingSupplyGadgets; // 0xFC
        Boolean EnableSelfHealGadgets; // 0xFD
        Boolean EnableHandGrenades; // 0xFE
        Boolean EnableBuildTools; // 0xFF
        Boolean EnableReinforcementGadget; // 0x100
        Boolean OnlySquadLeaderSpawn; // 0x101
        Boolean LimitedSquadLeaderSpawn; // 0x102
        Boolean NoPlayerSpawn; // 0x103
        Boolean DisableCombatSquadSpawn; // 0x104
        Boolean TeamSwitchingAllowed; // 0x105
        Boolean RevertBackToBF3KillerCamera; // 0x106
        Boolean DisableHitIndicators; // 0x107
        Boolean DisableVehicleCommanderActions; // 0x108
        Boolean EnableMapVoting; // 0x109
        Boolean EnableDeathExperience; // 0x10A
        Boolean IsCompetitive; // 0x10B
        Boolean LowRankOnly; // 0x10C
        Boolean CommanderEnabled; // 0x10D
        Boolean FieldUpgradeSystemActive; // 0x10E
        Boolean IsRanked; // 0x10F
        Boolean Kit1Enabled; // 0x110
        Boolean Kit2Enabled; // 0x111
        Boolean Kit3Enabled; // 0x112
        Boolean Kit4Enabled; // 0x113
        Boolean Kit5Enabled; // 0x114
        Boolean Kit6Enabled; // 0x115
        Boolean Kit7Enabled; // 0x116
        Boolean Kit8Enabled; // 0x117
        Boolean Kit9Enabled; // 0x118
        Boolean EnableServerFpsTracking; // 0x119
        Boolean MeleeOnMovingPlatformEnabled; // 0x11A
        Boolean CommunityXpBoostActive; // 0x11B
        Boolean SquadReviveEnabled; // 0x11C
        Boolean ShowWatermark; // 0x11D
        Boolean ShowClosedAlphaWatermark; // 0x11E
        Boolean ShowEndOfMatchScreen; // 0x11F
        Boolean PingMarkersEnabled; // 0x120
        char pad_0x121[0x7];
    }; // 0x128
    static_assert(sizeof(SyncedBFSettings) == 0x128);
}
#pragma pack(pop)