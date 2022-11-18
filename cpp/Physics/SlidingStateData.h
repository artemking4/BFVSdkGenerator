// Object: SlidingStateData
// ClassId: 1383
// RuntimeId: 37696
// TypeInfo: 0x0000000144F10380
#include "../Physics/CharacterStateData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class SlidingStateData : public Physics::CharacterStateData {
        Float32 HorizontalInputScale; // 0x20
        Float32 GravityScale; // 0x24
        Float32 CharacterSpringScale; // 0x28
        Float32 AllowedDistanceFromGround; // 0x2C
    }; // 0x30
    static_assert(sizeof(SlidingStateData) == 0x30);
}
#pragma pack(pop)