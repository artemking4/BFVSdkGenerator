// Object: VoiceOverEventEntityData
// ClassId: 3889
// RuntimeId: 44232
// TypeInfo: 0x0000000144E6D950
#include "../Entity/EntityData.h"
#include "../Audio/VoiceOverEvent.h"
#include "../Audio/VoiceOverNamedValue.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class VoiceOverEventEntityData : public Entity::EntityData {
        Audio::VoiceOverEvent VoEvent; // 0x20
        Audio::VoiceOverNamedValue EventPlayer; // 0x28
        Audio::VoiceOverNamedValue ExtraEventPlayer; // 0x30
        Float32 TriggerDelay; // 0x38
        Float32 FinishedDelay; // 0x3C
        Array<Int32> TrackSourcePositionNameHashes; // 0x40
        Boolean RunOnce; // 0x48
        Boolean CancelOnDeinit; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(VoiceOverEventEntityData) == 0x50);
}
#pragma pack(pop)