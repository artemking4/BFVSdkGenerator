// Object: PersistenceConfiguration
// ClassId: 623
// RuntimeId: 22110
// TypeInfo: 0x0000000144D14280
#include "../Core/Asset.h"
#include "../GameShared/PersistenceData.h"
#include "../CasablancaShared/AggregatedAwards.h"
#include "../DicePersistenceShared/AggregatedRanks.h"
#include "../CasablancaShared/ScoreboardSyncSystemAsset.h"
#include "../CasablancaShared/AggregatedDogTags.h"
#include "../CasablancaShared/InventoryData.h"
#include "../CasablancaShared/StaticUnlockList.h"
#include "../DicePersistenceShared/StatThrottleSettings.h"
#include "../DicePersistenceShared/AggregatedScoringData.h"
#include "../DicePersistenceShared/StatCategoryTreeCollection.h"
#include "../DicePersistenceShared/PersistenceCategorizationCollection.h"
#include "../CasablancaShared/GeneralCriteriaData.h"
#include "../CasablancaShared/GeneralStatisticsData.h"
#include "../DicePersistenceShared/StatAggregationData.h"
#include "../DicePersistenceShared/StatContextResetGroupCollection.h"
#include "../DicePersistenceShared/CounterResetGroupCollection.h"
#include "../DicePersistenceShared/CounterTypeCollection.h"
#include "../DicePersistenceShared/PersistenceActivationRuleCollection.h"
#include "../DicePersistenceShared/PersistenceActivationConditionCollection.h"
#include "../CasablancaShared/GameModeStatFilter.h"
#include "../Global/CString.h"
#include "../GameShared/BasicUnlockInfo.h"
#include "../Global/Guid.h"
#include "../DicePersistenceShared/StatContextKeyCollection.h"
#include "../DicePersistenceShared/StatEventCollection.h"
#include "../CasablancaShared/XdpExportAsset.h"
#include "../CasablancaShared/ScoringUIMapping.h"
#include "../CasablancaShared/RuntimeStatisticsDataContainer.h"
#include "../CasablancaShared/GameSettingsContainer.h"
#include "../CasablancaShared/CustomGamesSettingsObjectWriterData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceConfiguration : public Core::Asset {
        GameShared::PersistenceData PersistenceData; // 0x20
        CasablancaShared::AggregatedAwards Awards; // 0x28
        DicePersistenceShared::AggregatedRanks AggregatedRanks; // 0x30
        CasablancaShared::ScoreboardSyncSystemAsset ScoreboardSyncSystemAsset; // 0x38
        CasablancaShared::AggregatedDogTags AggregatedDogTags; // 0x40
        CasablancaShared::InventoryData Inventory; // 0x48
        CasablancaShared::StaticUnlockList StaticUnlocks; // 0x50
        DicePersistenceShared::StatThrottleSettings StatThrottleSettings; // 0x58
        DicePersistenceShared::AggregatedScoringData AggregatedScoring; // 0x60
        DicePersistenceShared::StatCategoryTreeCollection StatCategoryTreeCollection; // 0x68
        DicePersistenceShared::PersistenceCategorizationCollection PersistenceCategorizationCollection; // 0x70
        CasablancaShared::GeneralCriteriaData GeneralCriteriaData; // 0x78
        CasablancaShared::GeneralStatisticsData GeneralStatisticsData; // 0x80
        DicePersistenceShared::StatAggregationData StatAggregationData; // 0x88
        DicePersistenceShared::StatContextResetGroupCollection StatContextResetGroupCollection; // 0x90
        DicePersistenceShared::CounterResetGroupCollection CounterResetGroupCollection; // 0x98
        DicePersistenceShared::CounterTypeCollection CounterTypeCollection; // 0xA0
        DicePersistenceShared::PersistenceActivationRuleCollection PersistenceActivationRules; // 0xA8
        DicePersistenceShared::PersistenceActivationConditionCollection PersistenceActivationConditions; // 0xB0
        CasablancaShared::GameModeStatFilter EndOfRoundSummaryStatFilter; // 0xB8
        Array<CString> OrderedUnlockNames; // 0xC0
        Array<GameShared::BasicUnlockInfo> UnlockInfos; // 0xC8
        Array<Guid> DefaultUnlockedGuids; // 0xD0
        DicePersistenceShared::StatContextKeyCollection ContextKeys; // 0xD8
        DicePersistenceShared::StatEventCollection EventCollection; // 0xE0
        CasablancaShared::XdpExportAsset XdpExport; // 0xE8
        CasablancaShared::ScoringUIMapping ScoringUIMapping; // 0xF0
        CasablancaShared::RuntimeStatisticsDataContainer RuntimeStatsInfo; // 0xF8
        CasablancaShared::GameSettingsContainer GameSettings; // 0x100
        CasablancaShared::CustomGamesSettingsObjectWriterData CustomGamesSettingsObjectWriter; // 0x108
    }; // 0x110
    static_assert(sizeof(PersistenceConfiguration) == 0x110);
}
#pragma pack(pop)