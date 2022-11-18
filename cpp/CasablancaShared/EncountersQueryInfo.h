// Object: EncountersQueryInfo
// ClassId: 1552
// RuntimeId: 30280
// TypeInfo: 0x0000000144D0AAB0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/EncounterQueryInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncountersQueryInfo : public Core::DataContainer {
        Array<CasablancaShared::EncounterQueryInfo> EncounterQueryList; // 0x18
    }; // 0x20
    static_assert(sizeof(EncountersQueryInfo) == 0x20);
}
#pragma pack(pop)