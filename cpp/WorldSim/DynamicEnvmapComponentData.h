// Object: DynamicEnvmapComponentData
// ClassId: 1883
// RuntimeId: 11570
// TypeInfo: 0x0000000144EC1CC0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class DynamicEnvmapComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 KeyColorEnvmap; // 0x90
        Core::Vec3 SkyColorEnvmap; // 0xA0
        Core::Vec3 GroundColorEnvmap; // 0xB0
        Boolean Enable; // 0xC0
        Boolean TerrainReflectionsEnable; // 0xC1
        Uint8 FieldFlagOverride0; // 0xC2
        char pad_0xC3[0xD];
    }; // 0xD0
    static_assert(sizeof(DynamicEnvmapComponentData) == 0xD0);
}
#pragma pack(pop)