// Object: CameraParamsComponentData
// ClassId: 1876
// RuntimeId: 55201
// TypeInfo: 0x0000000144EC1840
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class CameraParamsComponentData : public Entity::VisualEnvironmentComponentData {
        Float32 ViewDistance; // 0x90
        Float32 NearPlane; // 0x94
        Float32 VegetationMaxWiggleDistance; // 0x98
        Uint8 FieldFlagOverride0; // 0x9C
        char pad_0x9D[0x3];
    }; // 0xA0
    static_assert(sizeof(CameraParamsComponentData) == 0xA0);
}
#pragma pack(pop)