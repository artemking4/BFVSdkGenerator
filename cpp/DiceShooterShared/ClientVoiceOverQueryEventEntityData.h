// Object: ClientVoiceOverQueryEventEntityData
// ClassId: 2512
// RuntimeId: 1801
// TypeInfo: 0x0000000144DE8B10
#include "../Entity/EntityData.h"
#include "../Audio/VoiceOverEvent.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/QueryEntityResult.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class ClientVoiceOverQueryEventEntityData : public Entity::EntityData {
        Audio::VoiceOverEvent VoEvent; // 0x20
        DiceShooterShared::QueryEntityResult QueryEntityInput; // 0x28
        Float32 TriggerDelay; // 0x38
        Float32 FinishedDelay; // 0x3C
        Boolean RunOnce; // 0x40
        Boolean CancelOnDeinit; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(ClientVoiceOverQueryEventEntityData) == 0x48);
}
#pragma pack(pop)