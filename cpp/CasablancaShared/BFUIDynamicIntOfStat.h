// Object: BFUIDynamicIntOfStat
// ClassId: 1254
// RuntimeId: 34142
// TypeInfo: 0x0000000144D82120
#include "../CasablancaShared/BFUIDynamicStat.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIDynamicIntOfStat : public CasablancaShared::BFUIDynamicStat {
        Int32 Value; // 0x30
        Int32 Of; // 0x34
    }; // 0x38
    static_assert(sizeof(BFUIDynamicIntOfStat) == 0x38);
}
#pragma pack(pop)