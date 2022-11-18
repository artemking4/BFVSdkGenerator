// Object: ConstantOp
// ClassId: 5711
// RuntimeId: 38254
// TypeInfo: 0x0000000144CFB4D0
#include "../CasablancaShared/WeatheringOp.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ConstantOp : public CasablancaShared::WeatheringOp {
        Float32 Value; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(ConstantOp) == 0x20);
}
#pragma pack(pop)