// Object: SwimmingStateData
// ClassId: 1384
// RuntimeId: 20843
// TypeInfo: 0x0000000144F10080
#include "../Physics/CharacterStateData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class SwimmingStateData : public Physics::CharacterStateData {
        Float32 BodyUnderWater; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(SwimmingStateData) == 0x28);
}
#pragma pack(pop)