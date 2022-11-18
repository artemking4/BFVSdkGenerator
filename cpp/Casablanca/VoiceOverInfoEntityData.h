// Object: VoiceOverInfoEntityData
// ClassId: 3891
// RuntimeId: 25143
// TypeInfo: 0x0000000144C1DD00
#include "../Entity/EntityData.h"
#include "../Audio/VoiceOverNamedValue.h"
#include "../Audio/VoiceOverObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class VoiceOverInfoEntityData : public Entity::EntityData {
        Audio::VoiceOverNamedValue Field; // 0x20
        Audio::VoiceOverObject ExpectedType; // 0x28
        Boolean Dummy; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(VoiceOverInfoEntityData) == 0x38);
}
#pragma pack(pop)