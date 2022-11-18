// Object: FloatStateActionData
// ClassId: 2951
// RuntimeId: 3011
// TypeInfo: 0x0000000144DED4A0
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class FloatStateActionData : public DiceShooterShared::PhysicsActionBaseData {
        Float32 Inertia; // 0x58
        Float32 MinValue; // 0x5C
        Float32 MaxValue; // 0x60
        Uint32 NetworkedBits; // 0x64
        Float32 DefaultValue; // 0x68
        Float32 Set; // 0x6C
        Float32 Add; // 0x70
        Float32 Sub; // 0x74
        Float32 Mul; // 0x78
        Boolean MuteValueDuringCorrection; // 0x7C
        Boolean OnlyWriteIfModified; // 0x7D
        char pad_0x7E[0x2];
    }; // 0x80
    static_assert(sizeof(FloatStateActionData) == 0x80);
}
#pragma pack(pop)