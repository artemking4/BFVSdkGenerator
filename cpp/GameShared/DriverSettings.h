// Object: DriverSettings
// ClassId: 475
// RuntimeId: 62531
// TypeInfo: 0x0000000144E80FC0
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../GameShared/RegulatedSteering.h"

#pragma pack(push, 8)
namespace GameShared {
    class DriverSettings : public Core::Asset {
        Float32 ThrottleWhenTurningOnTheSpot; // 0x20
        Float32 ShortProbeDistance; // 0x24
        Float32 LongProbeDistance; // 0x28
        Float32 AlignLargeAngle; // 0x2C
        Float32 AlignSmallAngle; // 0x30
        Int32 SteerInput; // 0x34
        Float32 MinRadius; // 0x38
        Float32 RadiusGrowthSpeed; // 0x3C
        Float32 StoppingDeceleration; // 0x40
        Float32 SteeringSensitivity; // 0x44
        GameShared::RegulatedSteering RegulatedSteering; // 0x48
        Float32 MaxBrakeOutput; // 0x50
        Float32 MinBrakeOutput; // 0x54
        Float32 LookAheadTime; // 0x58
        Float32 AngleDiffForNoSlowdown; // 0x5C
        Float32 AngleDiffForFullSlowdown; // 0x60
        Float32 VelocityAtFullSlowdown; // 0x64
        Float32 VelDiffAtMinAcc; // 0x68
        Float32 VelDiffAtMaxAcc; // 0x6C
        Float32 MinAcc; // 0x70
        Float32 MaxAcc; // 0x74
        Float32 VelDiffAtMinDec; // 0x78
        Float32 VelDiffAtMaxDec; // 0x7C
        Float32 MinDec; // 0x80
        Float32 MaxDec; // 0x84
        Float32 AccDiffAtMinThrottleVelocityAccelerating; // 0x88
        Float32 AccDiffAtMaxThrottleVelocityAccelerating; // 0x8C
        Float32 MinThrottleVelocityAccelerating; // 0x90
        Float32 MaxThrottleVelocityAccelerating; // 0x94
        Float32 AccDiffAtMinThrottleVelocityDecelerating; // 0x98
        Float32 AccDiffAtMaxThrottleVelocityDecelerating; // 0x9C
        Float32 MinThrottleVelocityDecelerating; // 0xA0
        Float32 MaxThrottleVelocityDecelerating; // 0xA4
        Float32 P; // 0xA8
        Float32 I; // 0xAC
        Float32 D; // 0xB0
        Float32 MaxError; // 0xB4
        Float32 MaxSumError; // 0xB8
        Float32 MaxPTerm; // 0xBC
        Float32 MaxITerm; // 0xC0
        Float32 MaxDTerm; // 0xC4
        Float32 MaxYawToApplySprint; // 0xC8
        Float32 MaxAngleDiffToApplySprint; // 0xCC
        Float32 MaxAngularVelocityToApplySprint; // 0xD0
        Float32 MinVelocityToApplySprint; // 0xD4
        Float32 LookAheadAimTime; // 0xD8
        Float32 MinLookAheadDist; // 0xDC
        Boolean UseCorridorToLimitDynamicRadius; // 0xE0
        Boolean UseInvertedInputToGetUnstuck; // 0xE1
        Boolean UseInvertedInputForPointsWithinTurnRadius; // 0xE2
        Boolean SquareBrakeOutput; // 0xE3
        Boolean UseSquareVelDiffCurveAcc; // 0xE4
        Boolean UseSquareVelDiffCurveDec; // 0xE5
        Boolean UseSquareAccDiffCurveAcc; // 0xE6
        Boolean UseSquareAccDiffCurveDec; // 0xE7
        Boolean UsePIDRegulator; // 0xE8
        Boolean IncludeYDifference; // 0xE9
        char pad_0xEA[0x6];
    }; // 0xF0
    static_assert(sizeof(DriverSettings) == 0xF0);
}
#pragma pack(pop)