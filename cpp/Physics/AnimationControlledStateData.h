// Object: AnimationControlledStateData
// ClassId: 1375
// RuntimeId: 35529
// TypeInfo: 0x0000000144F10400
#include "../Physics/CharacterStateData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class AnimationControlledStateData : public Physics::CharacterStateData {
        Float32 UpNormalTolerance; // 0x20
        Float32 CharacterSpringStrength; // 0x24
    }; // 0x28
    static_assert(sizeof(AnimationControlledStateData) == 0x28);
}
#pragma pack(pop)