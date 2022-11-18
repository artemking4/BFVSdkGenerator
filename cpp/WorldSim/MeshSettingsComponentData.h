// Object: MeshSettingsComponentData
// ClassId: 1894
// RuntimeId: 9397
// TypeInfo: 0x0000000144EC17C0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class MeshSettingsComponentData : public Entity::VisualEnvironmentComponentData {
        Float32 LodScale; // 0x90
        Float32 CullScreenAreaScale; // 0x94
        Float32 ShadowDistanceScale; // 0x98
        Uint8 FieldFlagOverride0; // 0x9C
        char pad_0x9D[0x3];
    }; // 0xA0
    static_assert(sizeof(MeshSettingsComponentData) == 0xA0);
}
#pragma pack(pop)