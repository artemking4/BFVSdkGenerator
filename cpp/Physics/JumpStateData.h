// Object: JumpStateData
// ClassId: 1379
// RuntimeId: 40467
// TypeInfo: 0x0000000144F10100
#include "../Physics/CharacterStateData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Physics {
    class JumpStateData : public Physics::CharacterStateData {
        Float32 JumpHeight; // 0x20
        Float32 JumpEffectSize; // 0x24
        Int32 JumpFramesActive; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(JumpStateData) == 0x30);
}
#pragma pack(pop)