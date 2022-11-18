// Object: FallingStateData
// ClassId: 1377
// RuntimeId: 43723
// TypeInfo: 0x0000000144F10200
#include "../Physics/CharacterStateData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class FallingStateData : public Physics::CharacterStateData {
        Float32 FreeFallingMaxTerminalVelocity; // 0x20
        Float32 FreeFallingMinTerminalVelocity; // 0x24
        Boolean UseClampedVelocity; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(FallingStateData) == 0x30);
}
#pragma pack(pop)