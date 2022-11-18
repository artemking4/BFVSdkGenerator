// Object: FadeKillData
// ClassId: 4481
// RuntimeId: 31868
// TypeInfo: 0x0000000144E2B640
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Emitter {
    class FadeKillData : public Emitter::ProcessorData {
        Float32 FadeTime; // 0x38
        Float32 RandomFadeTimeScale; // 0x3C
        Core::Vec3 EndSize; // 0x40
        Float32 EndTransparency; // 0x50
        char pad_0x54[0xC];
    }; // 0x60
    static_assert(sizeof(FadeKillData) == 0x60);
}
#pragma pack(pop)