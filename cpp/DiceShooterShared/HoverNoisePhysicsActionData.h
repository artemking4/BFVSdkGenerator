// Object: HoverNoisePhysicsActionData
// ClassId: 2956
// RuntimeId: 42918
// TypeInfo: 0x0000000144DED5A0
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/HoverNoiseData.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class HoverNoisePhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Float32 BaseFrequency; // 0x58
        char pad_0x5C[0x4];
        Array<DiceShooterShared::HoverNoiseData> Noises; // 0x60
    }; // 0x68
    static_assert(sizeof(HoverNoisePhysicsActionData) == 0x68);
}
#pragma pack(pop)