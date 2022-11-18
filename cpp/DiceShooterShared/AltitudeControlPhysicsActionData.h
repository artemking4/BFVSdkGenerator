// Object: AltitudeControlPhysicsActionData
// ClassId: 2947
// RuntimeId: 3177
// TypeInfo: 0x0000000144DEDCA0
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class AltitudeControlPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Float32 DesiredAltitude; // 0x58
        Float32 SmoothTimeAscending; // 0x5C
        Float32 SmoothTimeDescending; // 0x60
        char pad_0x64[0x4];
    }; // 0x68
    static_assert(sizeof(AltitudeControlPhysicsActionData) == 0x68);
}
#pragma pack(pop)