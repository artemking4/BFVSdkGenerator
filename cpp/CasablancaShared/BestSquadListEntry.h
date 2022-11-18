// Object: BestSquadListEntry
// ClassId: 1274
// RuntimeId: 28353
// TypeInfo: 0x0000000144D41D50
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUISquadObject.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BestSquadListEntry : public Core::DataContainer {
        CasablancaShared::BFUISquadObject Squad; // 0x18
        Int32 Score; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BestSquadListEntry) == 0x28);
}
#pragma pack(pop)