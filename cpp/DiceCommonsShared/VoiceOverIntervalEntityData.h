// Object: VoiceOverIntervalEntityData
// ClassId: 3892
// RuntimeId: 40207
// TypeInfo: 0x0000000144DC1D80
#include "../Entity/EntityData.h"
#include "../Audio/VoiceOverInterval.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class VoiceOverIntervalEntityData : public Entity::EntityData {
        Audio::VoiceOverInterval Interval; // 0x20
        Float32 TimeThreshold; // 0x28
        Boolean ResetIfThresholdReached; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(VoiceOverIntervalEntityData) == 0x30);
}
#pragma pack(pop)