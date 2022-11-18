// Object: SpawnDirectionData
// ClassId: 4489
// RuntimeId: 18186
// TypeInfo: 0x0000000144E2C8C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class SpawnDirectionData : public Emitter::ProcessorData {
        Float32 DirectionFromEmitterOrigin; // 0x38
        Float32 InheritSpeedAmount; // 0x3C
        Float32 InheritSpeedSmoothingFactor; // 0x40
        Float32 InheritSpeedRandomness; // 0x44
        Boolean InheritSpeedAndDirectionFromEmitter; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(SpawnDirectionData) == 0x50);
}
#pragma pack(pop)