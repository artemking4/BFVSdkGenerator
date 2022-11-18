// Object: BFServerConfiguration
// ClassId: 1196
// RuntimeId: 55998
// TypeInfo: 0x0000000144D312A0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFServerConfigurationSchedule.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFServerConfiguration : public Core::DataContainer {
        Array<CasablancaShared::BFServerConfigurationSchedule> Schedules; // 0x18
    }; // 0x20
    static_assert(sizeof(BFServerConfiguration) == 0x20);
}
#pragma pack(pop)