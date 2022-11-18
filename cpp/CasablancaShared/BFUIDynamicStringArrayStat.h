// Object: BFUIDynamicStringArrayStat
// ClassId: 1257
// RuntimeId: 9226
// TypeInfo: 0x0000000144D820A0
#include "../CasablancaShared/BFUIDynamicStat.h"
#include "../CasablancaShared/BFUIDynamicStringArrayStatEntry.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIDynamicStringArrayStat : public CasablancaShared::BFUIDynamicStat {
        Array<CasablancaShared::BFUIDynamicStringArrayStatEntry> Values; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIDynamicStringArrayStat) == 0x38);
}
#pragma pack(pop)