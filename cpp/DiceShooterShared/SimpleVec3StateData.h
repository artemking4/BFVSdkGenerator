// Object: SimpleVec3StateData
// ClassId: 4629
// RuntimeId: 47769
// TypeInfo: 0x0000000144DF16D0
#include "../DiceShooterShared/SimpleStateData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class SimpleVec3StateData : public DiceShooterShared::SimpleStateData {
        char pad_0x28[0x8];
        Core::Vec3 DefaultValue; // 0x30
    }; // 0x40
    static_assert(sizeof(SimpleVec3StateData) == 0x40);
}
#pragma pack(pop)