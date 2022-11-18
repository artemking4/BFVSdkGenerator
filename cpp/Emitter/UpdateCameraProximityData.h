// Object: UpdateCameraProximityData
// ClassId: 4507
// RuntimeId: 43603
// TypeInfo: 0x0000000144E2B5C0
#include "../Emitter/ProcessorData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Emitter {
    class UpdateCameraProximityData : public Emitter::ProcessorData {
        Float32 ForwardOffset; // 0x38
        char pad_0x3C[0x4];
        Core::Vec3 Size; // 0x40
        Core::Vec3 FadeDistance; // 0x50
    }; // 0x60
    static_assert(sizeof(UpdateCameraProximityData) == 0x60);
}
#pragma pack(pop)