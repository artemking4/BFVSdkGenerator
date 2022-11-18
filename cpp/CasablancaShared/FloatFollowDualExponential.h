// Object: FloatFollowDualExponential
// ClassId: 1632
// RuntimeId: 11258
// TypeInfo: 0x0000000144D0A530
#include "../CasablancaShared/FloatFollowData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FloatFollowDualExponential : public CasablancaShared::FloatFollowData {
        Float32 IncreasingSpeed; // 0x18
        Float32 DecreasingSpeed; // 0x1C
    }; // 0x20
    static_assert(sizeof(FloatFollowDualExponential) == 0x20);
}
#pragma pack(pop)