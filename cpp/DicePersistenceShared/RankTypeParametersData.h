// Object: RankTypeParametersData
// ClassId: 4559
// RuntimeId: 19042
// TypeInfo: 0x0000000144DC7880
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Guid.h"
#include "../DicePersistenceShared/RankGateListAsset.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class RankTypeParametersData : public Core::DataContainer {
        CString SourceStat; // 0x18
        CString TargetStat; // 0x20
        Guid IdentifierGuid; // 0x28
        DicePersistenceShared::RankGateListAsset RankGateList; // 0x38
        CString Name; // 0x40
    }; // 0x48
    static_assert(sizeof(RankTypeParametersData) == 0x48);
}
#pragma pack(pop)