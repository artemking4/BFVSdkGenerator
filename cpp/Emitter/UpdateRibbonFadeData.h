// Object: UpdateRibbonFadeData
// ClassId: 4520
// RuntimeId: 11722
// TypeInfo: 0x0000000144E2BA40
#include "../Emitter/ProcessorData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateRibbonFadeData : public Emitter::ProcessorData {
        Int32 FadeInParticleCount; // 0x38
        Int32 FadeOutParticleCount; // 0x3C
    }; // 0x40
    static_assert(sizeof(UpdateRibbonFadeData) == 0x40);
}
#pragma pack(pop)