// Object: CharacterLightingComponentData
// ClassId: 1877
// RuntimeId: 51174
// TypeInfo: 0x0000000144EC1540
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../WorldSim/CharacterLightingMode.h"
#include "../Core/Vec3.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace WorldSim {
    class CharacterLightingComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 TopLight; // 0x90
        Core::Vec3 BottomLight; // 0xA0
        Float32 CameraUpRotation; // 0xB0
        WorldSim::CharacterLightingMode CharacterLightingMode; // 0xB4
        Float32 BlendFactor; // 0xB8
        Float32 TopLightDirX; // 0xBC
        Float32 TopLightDirY; // 0xC0
        Float32 StartFadeDistance; // 0xC4
        Float32 EndFadeDistance; // 0xC8
        Uint16 FieldFlagOverride0; // 0xCC
        Boolean CharacterLightEnable; // 0xCE
        Boolean FirstPersonEnable; // 0xCF
        Boolean LockToCameraDirection; // 0xD0
        char pad_0xD1[0xF];
    }; // 0xE0
    static_assert(sizeof(CharacterLightingComponentData) == 0xE0);
}
#pragma pack(pop)