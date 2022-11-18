// Object: RandomXYZEvaluatorData
// ClassId: 1590
// RuntimeId: 60322
// TypeInfo: 0x0000000144E2D240
#include "../Emitter/EvaluatorData.h"
#include "../Emitter/RandomFrequency.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class RandomXYZEvaluatorData : public Emitter::EvaluatorData {
        Emitter::RandomFrequency RandomFrequency; // 0x20
        Float32 MaxX; // 0x24
        Float32 MinX; // 0x28
        Float32 MaxY; // 0x2C
        Float32 MinY; // 0x30
        Float32 MaxZ; // 0x34
        Float32 MinZ; // 0x38
        Boolean Mirror; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(RandomXYZEvaluatorData) == 0x40);
}
#pragma pack(pop)