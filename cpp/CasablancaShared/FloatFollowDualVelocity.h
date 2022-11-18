// Object: FloatFollowDualVelocity
// ClassId: 1633
// RuntimeId: 750
// TypeInfo: 0x0000000144D0A630
#include "../CasablancaShared/FloatFollowData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FloatFollowDualVelocity : public CasablancaShared::FloatFollowData {
        Float32 IncreasingVelocity; // 0x18
        Float32 DecreasingVelocity; // 0x1C
    }; // 0x20
    static_assert(sizeof(FloatFollowDualVelocity) == 0x20);
}
#pragma pack(pop)