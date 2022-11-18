// Object: FloatFollowSimpleVelocity
// ClassId: 1635
// RuntimeId: 25207
// TypeInfo: 0x0000000144D0A6B0
#include "../CasablancaShared/FloatFollowData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FloatFollowSimpleVelocity : public CasablancaShared::FloatFollowData {
        Float32 Velocity; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(FloatFollowSimpleVelocity) == 0x20);
}
#pragma pack(pop)