// Object: SpawnAnimationFrameData
// ClassId: 4487
// RuntimeId: 43906
// TypeInfo: 0x0000000144E2C640
#include "../Emitter/ProcessorData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Emitter {
    class SpawnAnimationFrameData : public Emitter::ProcessorData {
        Uint32 AnimationFrame; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(SpawnAnimationFrameData) == 0x40);
}
#pragma pack(pop)