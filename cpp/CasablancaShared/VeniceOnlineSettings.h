// Object: VeniceOnlineSettings
// ClassId: 5003
// RuntimeId: 26367
// TypeInfo: 0x0000000144CFBDD0
#include "../Online/OnlineSettings.h"
#include "../Global/CString.h"
#include "../GameShared/EntitlementConfigData.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/DTagUploadPolicy.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/OnlineProviderEnvironmentType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VeniceOnlineSettings : public Online::OnlineSettings {
        CString ClientGameConfigurationOverride; // 0x130
        GameShared::EntitlementConfigData EntitlementConfig; // 0x138
        CString SonarVoipAddress; // 0x148
        Int32 QueueCapacityOverride; // 0x150
        CasablancaShared::DTagUploadPolicy DogTagUploadPolicy; // 0x154
        Uint32 PingPeriod; // 0x158
        Float32 UnlockBlazeGameRetryTimeout; // 0x15C
        Float32 ServerJoinDelay; // 0x160
        Float32 ServerLatencyUpdateInterval; // 0x164
        Float32 ServerLatencyLockInterval; // 0x168
        char pad_0x16C[0x4];
        CString DefaultLicenseExemptExperiences; // 0x170
        CString ForcedLicenseExemptExperiences; // 0x178
        CString ServerMixId; // 0x180
        CasablancaShared::OnlineProviderEnvironmentType OnlineProviderEnvironmentType; // 0x188
        char pad_0x18C[0x4];
        CString BlazeEnvironmentConfigPrefix; // 0x190
        CString SnitchLanIPOverride; // 0x198
        Boolean IsCommander; // 0x1A0
        Boolean EnableProgressionUpload; // 0x1A1
        Boolean BlazeDisableDownloadFriendsStats; // 0x1A2
        Boolean BlazeDisableAssociationLists; // 0x1A3
        Boolean BlazeDisableAllStatsDownloading; // 0x1A4
        Boolean DisableMiniGameBrowserAutoUpdate; // 0x1A5
        Boolean EnableVoip; // 0x1A6
        Boolean DownloadFrontEndStats; // 0x1A7
        Boolean DownloadFrontEndInventory; // 0x1A8
        Boolean UploadFrontEndProgression; // 0x1A9
        Boolean LockBlazeGameWhenUpdatingRolesAndTeams; // 0x1AA
        Boolean SupportHostRecreation; // 0x1AB
        Boolean DebugQueueProcessing; // 0x1AC
        Boolean DisableStorageHandler; // 0x1AD
        Boolean DisableQuestHandler; // 0x1AE
        Boolean DisableInventoryHandler; // 0x1AF
        Boolean DisableRoundsPerMapFromMix; // 0x1B0
        char pad_0x1B1[0x7];
    }; // 0x1B8
    static_assert(sizeof(VeniceOnlineSettings) == 0x1B8);
}
#pragma pack(pop)