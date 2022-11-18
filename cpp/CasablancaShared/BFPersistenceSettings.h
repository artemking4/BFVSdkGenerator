// Object: BFPersistenceSettings
// ClassId: 5010
// RuntimeId: 32548
// TypeInfo: 0x0000000144D49CF0
#include "../DicePersistenceShared/PersistenceSettings.h"
#include "../CasablancaShared/PersistenceConfiguration.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFPersistenceSettings : public DicePersistenceShared::PersistenceSettings {
        CasablancaShared::PersistenceConfiguration PersistenceConfiguration; // 0x28
        Float32 RankSyncInterval; // 0x30
        Uint32 RankSyncCapacity; // 0x34
        Float32 DataRetrievalTimeout; // 0x38
        Int32 CoopUpdateStatsTimoutInSeconds; // 0x3C
        CString ToWGroupId; // 0x40
        Boolean DataRetrievalKicking; // 0x48
        Boolean EnableGameConfigServiceSyncer; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(BFPersistenceSettings) == 0x50);
}
#pragma pack(pop)