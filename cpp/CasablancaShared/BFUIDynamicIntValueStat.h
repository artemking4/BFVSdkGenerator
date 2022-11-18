// Object: BFUIDynamicIntValueStat
// ClassId: 1256
// RuntimeId: 21195
// TypeInfo: 0x0000000144D82220
#include "../CasablancaShared/BFUIDynamicStat.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIDynamicIntValueStat : public CasablancaShared::BFUIDynamicStat {
        Int32 Value; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(BFUIDynamicIntValueStat) == 0x38);
}
#pragma pack(pop)