// Object: SkyCelestialRotationComponentData
// ClassId: 1908
// RuntimeId: 941
// TypeInfo: 0x0000000144EC1240
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class SkyCelestialRotationComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 RotationAxis; // 0x90
        Float32 Rotation; // 0xA0
        Boolean Enable; // 0xA4
        Uint8 FieldFlagOverride0; // 0xA5
        char pad_0xA6[0xA];
    }; // 0xB0
    static_assert(sizeof(SkyCelestialRotationComponentData) == 0xB0);
}
#pragma pack(pop)