// Object: SimpleTransformStateData
// ClassId: 4628
// RuntimeId: 11218
// TypeInfo: 0x0000000144DF1850
#include "../DiceShooterShared/SimpleStateData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class SimpleTransformStateData : public DiceShooterShared::SimpleStateData {
        char pad_0x28[0x8];
        Core::LinearTransform DefaultValue; // 0x30
    }; // 0x70
    static_assert(sizeof(SimpleTransformStateData) == 0x70);
}
#pragma pack(pop)