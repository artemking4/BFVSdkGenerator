// Object: EntityVoiceOverInfo
// ClassId: 1575
// RuntimeId: 2701
// TypeInfo: 0x0000000144E1C7C0
#include "../Core/DataContainer.h"
#include "../Audio/VoiceOverObject.h"
#include "../Audio/VoiceOverLabel.h"

#pragma pack(push, 8)
namespace Audio {
    class EntityVoiceOverInfo : public Core::DataContainer {
        Audio::VoiceOverObject VoiceOverType; // 0x18
        Array<Audio::VoiceOverLabel> Labels; // 0x20
    }; // 0x28
    static_assert(sizeof(EntityVoiceOverInfo) == 0x28);
}
#pragma pack(pop)