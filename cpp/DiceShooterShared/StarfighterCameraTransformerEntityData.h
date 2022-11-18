// Object: StarfighterCameraTransformerEntityData
// ClassId: 2459
// RuntimeId: 52815
// TypeInfo: 0x0000000144DEE9A0
#include "../DiceShooterShared/CameraTransformerEntityData.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class StarfighterCameraTransformerEntityData : public DiceShooterShared::CameraTransformerEntityData {
        Float32 LookAheadAngInertia; // 0x28
        Float32 LookAheadLinInertia; // 0x2C
        Core::LinearTransform InTransform; // 0x30
        Core::Vec3 CamLinOffset; // 0x70
        Core::Vec3 CamAngOffset; // 0x80
        Core::Vec3 LookAheadLin; // 0x90
        Core::Vec3 LookAheadAng; // 0xA0
    }; // 0xB0
    static_assert(sizeof(StarfighterCameraTransformerEntityData) == 0xB0);
}
#pragma pack(pop)