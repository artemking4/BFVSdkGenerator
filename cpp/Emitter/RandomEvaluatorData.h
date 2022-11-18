// Object: RandomEvaluatorData
// ClassId: 1589
// RuntimeId: 7215
// TypeInfo: 0x0000000144E2D2C0
#include "../Emitter/EvaluatorData.h"
#include "../Emitter/RandomFrequency.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class RandomEvaluatorData : public Emitter::EvaluatorData {
        Emitter::RandomFrequency RandomFrequency; // 0x20
        Float32 Max; // 0x24
        Float32 Min; // 0x28
        Boolean Mirror; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(RandomEvaluatorData) == 0x30);
}
#pragma pack(pop)