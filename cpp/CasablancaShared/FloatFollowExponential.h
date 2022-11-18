// Object: FloatFollowExponential
// ClassId: 1634
// RuntimeId: 47006
// TypeInfo: 0x0000000144D0A5B0
#include "../CasablancaShared/FloatFollowData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FloatFollowExponential : public CasablancaShared::FloatFollowData {
        Float32 Speed; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(FloatFollowExponential) == 0x20);
}
#pragma pack(pop)