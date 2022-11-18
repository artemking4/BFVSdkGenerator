// Object: SoldierBreathControlComponentData
// ClassId: 1837
// RuntimeId: 46320
// TypeInfo: 0x0000000144F39910
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierBreathControlComponentData : public Entity::GameComponentData {
        Float32 Time; // 0x80
        Float32 AdditionalTime; // 0x84
        Float32 IncreaseTimeAmount; // 0x88
        Float32 TransitionTime; // 0x8C
        Float32 TransitionCurveShape; // 0x90
        Float32 ReleaseTime; // 0x94
        Float32 ReleaseTimeScaleFactor; // 0x98
        Float32 PenaltyMultiplier; // 0x9C
        Float32 PenaltyTimeout; // 0xA0
        char pad_0xA4[0xC];
    }; // 0xB0
    static_assert(sizeof(SoldierBreathControlComponentData) == 0xB0);
}
#pragma pack(pop)