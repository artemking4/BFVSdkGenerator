// Object: OnlineSettings
// ClassId: 5002
// RuntimeId: 13139
// TypeInfo: 0x0000000144F042A0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Online/BackendType.h"
#include "../Online/OnlineEnvironment.h"
#include "../Online/OnlineProviderAsset.h"
#include "../Online/OnlinePlatformConfiguration.h"
#include "../Global/CString.h"
#include "../Online/LogLevelType.h"
#include "../Global/Int32.h"
#include "../Online/OnlineRichPresenceData.h"
#include "../Online/LicenseConfiguration.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Online {
    class OnlineSettings : public Core::SystemSettings {
        Online::BackendType Backend; // 0x20
        Online::BackendType PeerBackend; // 0x24
        Online::OnlineEnvironment Environment; // 0x28
        Online::OnlineEnvironment ResolvedEnvironment; // 0x2C
        Online::OnlineProviderAsset Provider; // 0x30
        Array<Online::OnlinePlatformConfiguration> Platforms; // 0x38
        CString ServiceNameOverride; // 0x40
        Online::LogLevelType LogLevel; // 0x48
        Int32 BlazeLogLevel; // 0x4C
        Int32 DirtySockLogLevel; // 0x50
        char pad_0x54[0x4];
        Online::OnlineRichPresenceData RichPresenceData; // 0x58
        Online::LicenseConfiguration LicenseConfig; // 0x60
        CString Region; // 0x68
        CString Country; // 0x70
        CString PingSite; // 0x78
        CString MatchmakingToken; // 0x80
        Uint32 NegativeUserCacheRefreshPeriod; // 0x88
        char pad_0x8C[0x4];
        CString ServerLoginEmail; // 0x90
        CString ServerLoginPassword; // 0x98
        CString ServerLoginPersonaName; // 0xA0
        CString ServerLoginProjectTag; // 0xA8
        Int32 BlazeServerConnectionTimeout; // 0xB0
        Int32 BlazeServerTimeout; // 0xB4
        Int32 BlazeClientConnectionTimeout; // 0xB8
        Int32 BlazeClientTimeout; // 0xBC
        Int32 PeerPort; // 0xC0
        Int32 DirtySockServerPacketQueueCapacity; // 0xC4
        Uint32 ServerMaxProtoSyncRecvPollCount; // 0xC8
        Uint32 ServerProtoIdleTime; // 0xCC
        Uint32 DirtySockMaxConnectionCount; // 0xD0
        Uint32 BlazeCachedUserRefreshInterval; // 0xD4
        CString TrustedLoginPath; // 0xD8
        CString TrustedLoginCertFilename; // 0xE0
        CString TrustedLoginKeyFilename; // 0xE8
        CString TrustedLoginId; // 0xF0
        Uint32 MinPlayerCapacity; // 0xF8
        char pad_0xFC[0x4];
        CString BlazeService; // 0x100
        CString OverrideCreateGameTemplateName; // 0x108
        CString ResettablePool; // 0x110
        Boolean AssertOnPresenceRequestFailures; // 0x118
        Boolean ClientIsPresenceEnabled; // 0x119
        Boolean ServerIsPresenceEnabled; // 0x11A
        Boolean IsSecure; // 0x11B
        Boolean EnableQoS; // 0x11C
        Boolean WaitForQoS; // 0x11D
        Boolean EnableBlazeTDFLogging; // 0x11E
        Boolean CASLogging; // 0x11F
        Boolean ServerIsReconfigurable; // 0x120
        Boolean SupportHostMigration; // 0x121
        Boolean ServerAllowAnyReputation; // 0x122
        Boolean DirtySockUseSyncInfo; // 0x123
        Boolean ServerUseAsyncReceive; // 0x124
        Boolean DirtySockVoipEnabled; // 0x125
        Boolean MatchmakingRoleEnabled; // 0x126
        Boolean DirtySockServerHandleICMP; // 0x127
        Boolean EnableNucleusLtOverride; // 0x128
        Boolean EnableOfflineCatalogItems; // 0x129
        Boolean ForceEntireCatalogOffline; // 0x12A
        Boolean BlazeForceLocalPersistedInfo; // 0x12B
        Boolean OverrideCreateGameTemplate; // 0x12C
        char pad_0x12D[0x3];
    }; // 0x130
    static_assert(sizeof(OnlineSettings) == 0x130);
}
#pragma pack(pop)