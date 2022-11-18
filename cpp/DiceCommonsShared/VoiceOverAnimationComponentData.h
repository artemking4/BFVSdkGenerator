// Object: VoiceOverAnimationComponentData
// ClassId: 1916
// RuntimeId: 6346
// TypeInfo: 0x0000000144DB3430
#include "../Entity/GameComponentData.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../DiceCommonsShared/AnimationVOBinding.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class VoiceOverAnimationComponentData : public Entity::GameComponentData {
        CString VOAmplitudeParam; // 0x80
        Float32 VOAmplitudeMultiplier; // 0x88
        DiceCommonsShared::AnimationVOBinding VOBinding; // 0x8C
        char pad_0xC8[0x8];
    }; // 0xD0
    static_assert(sizeof(VoiceOverAnimationComponentData) == 0xD0);
}
#pragma pack(pop)