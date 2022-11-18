// Object: VelocityRedirectCameraTransformerEntityData
// ClassId: 2461
// RuntimeId: 46398
// TypeInfo: 0x0000000144DEE7A0
#include "../DiceShooterShared/CameraTransformerEntityData.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"
#include "../DiceShooterShared/RedirectData.h"
#include "../Core/AudioCurve.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class VelocityRedirectCameraTransformerEntityData : public DiceShooterShared::CameraTransformerEntityData {
        Array<DiceShooterShared::RedirectData> RedirectData; // 0x28
        Core::AudioCurve LinSpeedScaleCurve; // 0x30
        Core::LinearTransform InTransform; // 0x40
        Core::Vec3 WorldLinVel; // 0x80
        Core::Vec3 WorldAngVel; // 0x90
    }; // 0xA0
    static_assert(sizeof(VelocityRedirectCameraTransformerEntityData) == 0xA0);
}
#pragma pack(pop)