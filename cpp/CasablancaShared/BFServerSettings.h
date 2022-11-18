// Object: BFServerSettings
// ClassId: 4962
// RuntimeId: 18531
// TypeInfo: 0x0000000144D31320
#include "../Core/SystemSettings.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../GameShared/VoiceChannel.h"
#include "../CasablancaShared/BadFrameBucketType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFServerSettings : public Core::SystemSettings {
        Float32 GatewayReauthenticationTime; // 0x20
        Int32 GatewayReauthenticationTries; // 0x24
        Int32 DisableTeamSwitchRoundProgressThreshold; // 0x28
        char pad_0x2C[0x4];
        CString ForceTeamForPlayerTag; // 0x30
        Int32 ForceTeamForPlayerTagTeam; // 0x38
        char pad_0x3C[0x4];
        CString ForceSquadForPlayerTag; // 0x40
        Int32 ForceSquadForPlayerTagSquad; // 0x48
        char pad_0x4C[0x4];
        CString ForceTeamAndSquadForPlayers; // 0x50
        CString ForceNametagForPlayers; // 0x58
        Float32 NoInteractivityTimeoutTime; // 0x60
        Float32 NoInteractivityThresholdLimit; // 0x64
        Float32 NoInteractivityMaxKeyHeldDownTime; // 0x68
        Uint32 NoInteractivityBanRoundCount; // 0x6C
        Uint32 TeamKillCountForKick; // 0x70
        Float32 TeamKillValueForKick; // 0x74
        Float32 TeamKillValueIncrease; // 0x78
        Float32 TeamKillValueDecreasePerSecond; // 0x7C
        Uint32 TeamKillKickForBan; // 0x80
        Int32 RoundMaxPlayerCount; // 0x84
        Int32 RoundMinPlayerCount; // 0x88
        Int32 RoundLockdownCountdown; // 0x8C
        Int32 RoundRestartCountdown; // 0x90
        Int32 RoundWarmupTimeout; // 0x94
        CString ServerPreset; // 0x98
        CString ServerType; // 0xA0
        CString ServerMode; // 0xA8
        CString ServerExperience; // 0xB0
        CString ServerDescription; // 0xB8
        CString ServerMessage; // 0xC0
        CString ServerAdministrationSettings; // 0xC8
        CString ServerAdministrationMapRotation; // 0xD0
        CString ServerAdministrationMapRotationInformation; // 0xD8
        CString Spectators; // 0xE0
        Uint32 TeamSwitchImbalanceLimit; // 0xE8
        Uint32 GameSize; // 0xEC
        CString GameMod; // 0xF0
        GameShared::VoiceChannel DefaultVoiceChannel; // 0xF8
        Int32 DeathmatchFriendZoneFallbackCount; // 0xFC
        Float32 AlternateEORTimeout; // 0x100
        Int32 MaxNumSoldierCorpses; // 0x104
        Int32 CommanderRankThreshold; // 0x108
        Int32 LowRankLimit; // 0x10C
        Float32 TicketBleedRateModifier; // 0x110
        Float32 BackendConnectDelay; // 0x114
        Int32 ModeObjectiveShuffle; // 0x118
        Int32 EventWelcomeTimer; // 0x11C
        Float32 PasswordVerificationWindow; // 0x120
        Float32 RestrictTimeDeathKillTradeDistance; // 0x124
        Float32 RestrictTimeDeathKillTradeTime; // 0x128
        char pad_0x12C[0x4];
        CString SurveyId; // 0x130
        Int32 SquadSpawnEnableEnemyProximityChecks; // 0x138
        Float32 SquadSpawnNearbyEnemyDistance; // 0x13C
        Float32 SquadSpawnEnemyVisibleRecheckTime; // 0x140
        Int32 SquadSpawnMaxCloseEnemyLimit; // 0x144
        Float32 SquadSpawnNewSpawnDelay; // 0x148
        Float32 SquadSpawnResetToDeployOnDeathTooLateTime; // 0x14C
        Float32 SchematicsSpawnProtectionTime; // 0x150
        Float32 PointSystemPointsMultiplier; // 0x154
        Int32 FCL; // 0x158
        Float32 FCLDSMin; // 0x15C
        Int32 FCLDSMaxMoves; // 0x160
        Int32 TFCL; // 0x164
        Float32 FCLMinFreqFactor; // 0x168
        Float32 FCLMinFreqDistFactor; // 0x16C
        Float32 ServerAuthoritativeBulletDamageThreshold; // 0x170
        Float32 ServerAuthoritativeBulletDamageReportThreshold; // 0x174
        Float32 ServerSpottingNoTestDistance; // 0x178
        Float32 ServerSpottingTestThresholdDegree; // 0x17C
        Int32 TiebreakerRoundLimit; // 0x180
        Float32 PartyInfoBrowserListSubscriptionRetryTimeSeconds; // 0x184
        Uint32 PartyInfoBrowserListSubscriptionMaxRetryAttempts; // 0x188
        Float32 SquadLeaderMutinyTimer; // 0x18C
        CasablancaShared::BadFrameBucketType BadFrameBucketType; // 0x190
        Boolean AutoBalance; // 0x194
        Boolean OverrideAutoBalance; // 0x195
        Boolean DisableBattlePickups; // 0x196
        Boolean UseGameModeSpecificSkillForBalancing; // 0x197
        Boolean Balanced; // 0x198
        Boolean IsManDownRotationEnabled; // 0x199
        Boolean EnableKillCam; // 0x19A
        Boolean TrackKillerInKillCam; // 0x19B
        Boolean EnableAlwaysFog; // 0x19C
        Boolean MapSequencerEnabled; // 0x19D
        Boolean EliteKitEnabled; // 0x19E
        Boolean BehemothsEnabled; // 0x19F
        Boolean TicketAutoBleed; // 0x1A0
        Boolean KickAPlayerOnVIPJoin; // 0x1A1
        Boolean AlwaysAllowedToSpectate; // 0x1A2
        Boolean BreakPreRound; // 0x1A3
        Boolean ServerMapSequencerDebugOutput; // 0x1A4
        Boolean ServerMapSequencerResetWithMapList; // 0x1A5
        Boolean ServerAuthoritativeBulletDamage; // 0x1A6
        Boolean ServerAuthoritativeBulletDamageMismatchReportOnly; // 0x1A7
        Boolean ServerSpottingTestOcclusion; // 0x1A8
        Boolean ServerSpottingVerification; // 0x1A9
        Boolean BlockDamageForForcedServerSideHitDetection; // 0x1AA
        Boolean Glicko2SystemDebugOutput; // 0x1AB
        Boolean Glicko2SystemForceOpposingTeam; // 0x1AC
        Boolean RankXPEventsEnabled; // 0x1AD
        Boolean IgnoreKitValidation; // 0x1AE
        Boolean ServerMapSequencerGenerateSingleMapRotations; // 0x1AF
        Boolean ReinforcementPurchaseResetsMutinyTimer; // 0x1B0
        Boolean ScoreConvertsToRequisitionPoints; // 0x1B1
        Boolean SquadManagerDebugOutput; // 0x1B2
        Boolean MPTournamentDebugOutput; // 0x1B3
        char pad_0x1B4[0x4];
    }; // 0x1B8
    static_assert(sizeof(BFServerSettings) == 0x1B8);
}
#pragma pack(pop)