// Object: BFSpectatorCameraSwayEntityData
// ClassId: 2129
// RuntimeId: 62791
// TypeInfo: 0x0000000144D42C50
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorCameraSwayEntityData : public Entity::EntityData {
        Float32 DirectionChangeInertia; // 0x20
        Float32 SwayDuration; // 0x24
        Float32 SwayYawAngle; // 0x28
        Float32 SwayPitchAngle; // 0x2C
        Boolean CameraSwayEnabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFSpectatorCameraSwayEntityData) == 0x38);
}
#pragma pack(pop)