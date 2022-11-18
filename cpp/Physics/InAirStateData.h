// Object: InAirStateData
// ClassId: 1378
// RuntimeId: 17280
// TypeInfo: 0x0000000144F10280
#include "../Physics/CharacterStateData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Physics {
    class InAirStateData : public Physics::CharacterStateData {
        Float32 FreeFallVelocity; // 0x20
        Float32 MaxUpwardsVelocityForGround; // 0x24
        Boolean UseMaxUpwardsVelocityForGround; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(InAirStateData) == 0x30);
}
#pragma pack(pop)