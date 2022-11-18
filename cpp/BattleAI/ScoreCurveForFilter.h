// Object: ScoreCurveForFilter
// ClassId: 4581
// RuntimeId: 59778
// TypeInfo: 0x0000000144BF04C0
#include "../Core/DataContainer.h"
#include "../Core/FloatCurve.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace BattleAI {
    class ScoreCurveForFilter : public Core::DataContainer {
        Core::FloatCurve ScoreCurve; // 0x18
        Uint32 RuntimeFilter; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ScoreCurveForFilter) == 0x28);
}
#pragma pack(pop)