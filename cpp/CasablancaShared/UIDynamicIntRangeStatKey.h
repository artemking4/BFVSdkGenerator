// Object: UIDynamicIntRangeStatKey
// ClassId: 5534
// RuntimeId: 61065
// TypeInfo: 0x0000000144D98810
#include "../CasablancaShared/UIDynamicStatKey.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDynamicIntRangeStatKey : public CasablancaShared::UIDynamicStatKey {
        Int32 Min; // 0x30
        Int32 Max; // 0x34
        Int32 Value; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(UIDynamicIntRangeStatKey) == 0x40);
}
#pragma pack(pop)