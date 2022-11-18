// Object: VoiceOverSourceEntityData
// ClassId: 3899
// RuntimeId: 39666
// TypeInfo: 0x0000000144DC1B00
#include "../Entity/EntityData.h"
#include "../Audio/EntityVoiceOverInfo.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class VoiceOverSourceEntityData : public Entity::EntityData {
        Audio::EntityVoiceOverInfo VoiceOverInfo; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform Transform; // 0x30
    }; // 0x70
    static_assert(sizeof(VoiceOverSourceEntityData) == 0x70);
}
#pragma pack(pop)