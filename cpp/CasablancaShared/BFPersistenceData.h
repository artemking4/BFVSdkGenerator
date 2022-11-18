// Object: BFPersistenceData
// ClassId: 815
// RuntimeId: 53824
// TypeInfo: 0x0000000144D49D70
#include "../GameShared/PersistenceData.h"
#include "../CasablancaShared/AggregatedAwards.h"
#include "../CasablancaShared/ConsumableUnlockSetup.h"
#include "../CasablancaShared/RosterData.h"
#include "../CasablancaShared/EadpStats.h"
#include "../CasablancaShared/AggregatedStatsLists.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFPersistenceData : public GameShared::PersistenceData {
        CasablancaShared::AggregatedAwards Awards; // 0x48
        CasablancaShared::ConsumableUnlockSetup ConsumableUnlockSetup; // 0x50
        CasablancaShared::RosterData RosterData; // 0x58
        CasablancaShared::EadpStats EadpStats; // 0x60
        CasablancaShared::AggregatedStatsLists AggregatedStatsLists; // 0x68
    }; // 0x70
    static_assert(sizeof(BFPersistenceData) == 0x70);
}
#pragma pack(pop)