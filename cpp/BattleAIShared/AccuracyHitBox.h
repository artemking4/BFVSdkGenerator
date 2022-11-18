// Object: AccuracyHitBox
// ClassId: 88
// RuntimeId: 47098
// TypeInfo: 0x0000000144C071E0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AccuracyHitBox : public Core::DataContainer {
        Float32 AimBoxDistMin; // 0x18
        Float32 AimBoxDistMax; // 0x1C
        Float32 AimBoxDistFarStart; // 0x20
        Float32 AimBoxDistFarEnd; // 0x24
        Float32 AimBoxWidthMinDistMin; // 0x28
        Float32 AimBoxWidthMaxDistMin; // 0x2C
        Float32 AimBoxHeightMinDistMin; // 0x30
        Float32 AimBoxHeightMaxDistMin; // 0x34
        Float32 AimBoxWidthMinDistMax; // 0x38
        Float32 AimBoxWidthMaxDistMax; // 0x3C
        Float32 AimBoxHeightMinDistMax; // 0x40
        Float32 AimBoxHeightMaxDistMax; // 0x44
        Float32 AimBoxWidthMinDistFar; // 0x48
        Float32 AimBoxWidthMaxDistFar; // 0x4C
        Float32 AimBoxHeightMinDistFar; // 0x50
        Float32 AimBoxHeightMaxDistFar; // 0x54
        Float32 LateralMovementScaling; // 0x58
        Float32 LateralMovementScalingMaximum; // 0x5C
        Float32 AimAtGroundYOffsetFraction; // 0x60
        char pad_0x64[0x4];
    }; // 0x68
    static_assert(sizeof(AccuracyHitBox) == 0x68);
}
#pragma pack(pop)