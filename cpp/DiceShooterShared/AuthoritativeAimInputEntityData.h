// Object: AuthoritativeAimInputEntityData
// ClassId: 2033
// RuntimeId: 54756
// TypeInfo: 0x0000000144DE7B10
#include "../DiceShooterShared/AimInputEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class AuthoritativeAimInputEntityData : public DiceShooterShared::AimInputEntityData {
        Float32 Yaw; // 0x20
        Float32 Pitch; // 0x24
        Boolean UseCorrectSetup; // 0x28
        Boolean SupplyLocalYawAndPitch; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(AuthoritativeAimInputEntityData) == 0x30);
}
#pragma pack(pop)