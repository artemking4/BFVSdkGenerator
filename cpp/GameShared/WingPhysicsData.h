// Object: WingPhysicsData
// ClassId: 5718
// RuntimeId: 56896
// TypeInfo: 0x0000000144E9B410
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../GameShared/Curve2D.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class WingPhysicsData : public Core::DataContainer {
        Float32 Lift; // 0x18
        Float32 FlapLift; // 0x1C
        GameShared::Curve2D LiftCoefficient; // 0x20
        Float32 Drag; // 0x28
        Float32 FlapDrag; // 0x2C
        GameShared::Curve2D DragCoefficient; // 0x30
        Float32 AngularVelocityLiftModifier; // 0x38
        Float32 DragRotationModifier; // 0x3C
        Float32 BaseAngleOfAttack; // 0x40
        Int32 InputForFlap; // 0x44
        Float32 FlapTurnSpeed; // 0x48
        Float32 VisualFlapTurnSpeed; // 0x4C
        Float32 VisualFlapAngleLimit; // 0x50
        char pad_0x54[0x4];
        GameShared::Curve2D MaxFlapAngleScaleFactor; // 0x58
    }; // 0x60
    static_assert(sizeof(WingPhysicsData) == 0x60);
}
#pragma pack(pop)