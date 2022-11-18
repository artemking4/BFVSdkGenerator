// Object: RandomXYZWEvaluatorData
// ClassId: 1591
// RuntimeId: 64676
// TypeInfo: 0x0000000144E2D1C0
#include "../Emitter/EvaluatorData.h"
#include "../Emitter/RandomFrequency.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class RandomXYZWEvaluatorData : public Emitter::EvaluatorData {
        Emitter::RandomFrequency RandomFrequency; // 0x20
        Float32 MaxX; // 0x24
        Float32 MinX; // 0x28
        Float32 MaxY; // 0x2C
        Float32 MinY; // 0x30
        Float32 MaxZ; // 0x34
        Float32 MinZ; // 0x38
        Float32 MaxW; // 0x3C
        Float32 MinW; // 0x40
        Boolean Mirror; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(RandomXYZWEvaluatorData) == 0x48);
}
#pragma pack(pop)