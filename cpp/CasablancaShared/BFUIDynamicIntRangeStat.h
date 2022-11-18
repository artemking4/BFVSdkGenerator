// Object: BFUIDynamicIntRangeStat
// ClassId: 1255
// RuntimeId: 29094
// TypeInfo: 0x0000000144D821A0
#include "../CasablancaShared/BFUIDynamicStat.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIDynamicIntRangeStat : public CasablancaShared::BFUIDynamicStat {
        Int32 Min; // 0x30
        Int32 Max; // 0x34
        Int32 Value; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(BFUIDynamicIntRangeStat) == 0x40);
}
#pragma pack(pop)