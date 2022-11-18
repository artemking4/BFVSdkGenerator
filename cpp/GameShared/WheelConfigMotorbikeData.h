// Object: WheelConfigMotorbikeData
// ClassId: 5715
// RuntimeId: 29546
// TypeInfo: 0x0000000144E9AF10
#include "../GameShared/WheelConfigData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class WheelConfigMotorbikeData : public GameShared::WheelConfigData {
        Float32 MaxSpringForce; // 0x190
        Float32 CollisionYawDampeningDuration; // 0x194
        Float32 CollisionYawDampening; // 0x198
        char pad_0x19C[0x4];
    }; // 0x1A0
    static_assert(sizeof(WheelConfigMotorbikeData) == 0x1A0);
}
#pragma pack(pop)