// Object: DiceGameplayFeatureComponentData
// ClassId: 1757
// RuntimeId: 55065
// TypeInfo: 0x0000000144EFA830
#include "../Entity/GameComponentData.h"
#include "../MotionMachineShared/DiceGameplayFeatureList.h"

#pragma pack(push, 16)
namespace MotionMachineShared {
    class DiceGameplayFeatureComponentData : public Entity::GameComponentData {
        MotionMachineShared::DiceGameplayFeatureList List; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(DiceGameplayFeatureComponentData) == 0x90);
}
#pragma pack(pop)