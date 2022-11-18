// Object: ClimbingStateData
// ClassId: 1376
// RuntimeId: 19844
// TypeInfo: 0x0000000144F10180
#include "../Physics/CharacterStateData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class ClimbingStateData : public Physics::CharacterStateData {
        Float32 LateralInputScale; // 0x20
        Float32 DownAngleLimit; // 0x24
        Float32 DropOffAngle; // 0x28
        Float32 AttractionVelocity; // 0x2C
        Float32 PushAwayVelocity; // 0x30
        Float32 ClimbHeightOffset; // 0x34
        Float32 ClimbOffVerticalDistance; // 0x38
        Float32 ClimbOffVerticalTime; // 0x3C
        Float32 ClimbOffHorizontalDistance; // 0x40
        Float32 ClimbOffHorizontalTime; // 0x44
    }; // 0x48
    static_assert(sizeof(ClimbingStateData) == 0x48);
}
#pragma pack(pop)