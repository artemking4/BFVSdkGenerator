// Object: AIStaggerComponentData
// ClassId: 1702
// RuntimeId: 3305
// TypeInfo: 0x0000000144C056E0
#include "../Entity/GameComponentData.h"
#include "../BattleAIShared/AIStaggerComponentBinding.h"
#include "../BattleAIShared/AIStaggerAnimationAsset.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIStaggerComponentData : public Entity::GameComponentData {
        BattleAIShared::AIStaggerComponentBinding Binding; // 0x80
        char pad_0xE4[0x4];
        BattleAIShared::AIStaggerAnimationAsset StaggerAnimations; // 0xE8
        Float32 TriggerStaggerDecayRate; // 0xF0
        Float32 StaggerTypeDecayRate; // 0xF4
        Float32 TriggerStaggerThreshold; // 0xF8
        Float32 HeavyStaggerThreshold; // 0xFC
        Float32 LightStaggerCooldownDuration; // 0x100
        Float32 HeavyStaggerCooldownDuration; // 0x104
        char pad_0x108[0x8];
    }; // 0x110
    static_assert(sizeof(AIStaggerComponentData) == 0x110);
}
#pragma pack(pop)