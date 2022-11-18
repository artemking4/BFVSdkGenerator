// Object: TurbulanceData
// ClassId: 4499
// RuntimeId: 64378
// TypeInfo: 0x0000000144E2C0C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"
#include "../Emitter/TurbulenceNoiseType.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Emitter {
    class TurbulanceData : public Emitter::ProcessorData {
        Float32 Intensity; // 0x38
        Emitter::TurbulenceNoiseType NoiseType; // 0x3C
        Core::Vec3 Multiplier; // 0x40
        Float32 PeriodSpace; // 0x50
        Float32 TurbulenceForceAsInstantVelocity; // 0x54
        Int32 Octaves; // 0x58
        Float32 OctavePersistence; // 0x5C
        Float32 PerParticleRandomness; // 0x60
        char pad_0x64[0xC];
    }; // 0x70
    static_assert(sizeof(TurbulanceData) == 0x70);
}
#pragma pack(pop)