// Object: AccumulateOverDistanceOp
// ClassId: 5709
// RuntimeId: 11025
// TypeInfo: 0x0000000144CFB450
#include "../CasablancaShared/WeatheringOp.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AccumulateOverDistanceOp : public CasablancaShared::WeatheringOp {
        Float32 TargetValue; // 0x18
        Float32 InitialValue; // 0x1C
        Float32 DistanceToReachTarget; // 0x20
        Boolean KeepValueWhenMaterialChanged; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(AccumulateOverDistanceOp) == 0x28);
}
#pragma pack(pop)