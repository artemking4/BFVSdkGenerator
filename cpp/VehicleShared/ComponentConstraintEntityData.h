// Object: ComponentConstraintEntityData
// ClassId: 2530
// RuntimeId: 41356
// TypeInfo: 0x0000000144F70C80
#include "../VehicleShared/ComponentTransformEntityBaseData.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../VehicleShared/AimConstraintRotationAxis.h"
#include "../VehicleShared/AimConstraintAxis.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace VehicleShared {
    class ComponentConstraintEntityData : public VehicleShared::ComponentTransformEntityBaseData {
        char pad_0x28[0x8];
        Core::Vec3 PointConstraintPosition; // 0x30
        Core::Vec3 AimConstraintPosition; // 0x40
        Core::Vec3 LimitAimConstraintPositionMovementToDirection; // 0x50
        Core::Vec3 AimConstraintOffset; // 0x60
        Core::Vec3 PositionalOffset; // 0x70
        Float32 InterpolationDuration; // 0x80
        Float32 PointConstraintWeight; // 0x84
        VehicleShared::AimConstraintRotationAxis LimitRotationToAxis; // 0x88
        VehicleShared::AimConstraintAxis AimConstraintAxis; // 0x8C
        Float32 AimConstraintPointConstraintWeight; // 0x90
        char pad_0x94[0x4];
        CString BoneName; // 0x98
        Float32 BoneOffsetY; // 0xA0
        Boolean PointConstraintPositionIsRelativeTarget; // 0xA4
        Boolean AimConstraintPositionIsRelativeTarget; // 0xA5
        Boolean AllowScaling; // 0xA6
        char pad_0xA7[0x9];
    }; // 0xB0
    static_assert(sizeof(ComponentConstraintEntityData) == 0xB0);
}
#pragma pack(pop)