// Object: UIDynamicIntValueStatKey
// ClassId: 5535
// RuntimeId: 41723
// TypeInfo: 0x0000000144D98890
#include "../CasablancaShared/UIDynamicStatKey.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDynamicIntValueStatKey : public CasablancaShared::UIDynamicStatKey {
        Int32 Value; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UIDynamicIntValueStatKey) == 0x38);
}
#pragma pack(pop)