// Object: GameTelemetrySettings
// ClassId: 4991
// RuntimeId: 54037
// TypeInfo: 0x0000000144C31170
#include "../Core/SystemSettings.h"
#include "../Global/CString.h"
#include "../Casablanca/WhitelistedStatsTelemetryAsset.h"
#include "../Casablanca/RankTimerPair.h"
#include "../Core/DataContainer.h"

#pragma pack(push, 8)
namespace Casablanca {
    class GameTelemetrySettings : public Core::SystemSettings {
        Array<CString> WhitelistedPlayerStat; // 0x20
        Casablanca::WhitelistedStatsTelemetryAsset WhitelistedStatsPlayerDeath; // 0x28
        Array<CString> WhitelistedRanks; // 0x30
        Array<Casablanca::RankTimerPair> WhitelistedRanksAndTimer; // 0x38
        Array<CString> WhitelistedDeathStats; // 0x40
        Core::DataContainer GenericRankDataContainerIdentifier; // 0x48
    }; // 0x50
    static_assert(sizeof(GameTelemetrySettings) == 0x50);
}
#pragma pack(pop)