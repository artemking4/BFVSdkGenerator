// Object: VoiceOverObjectReaderWatcherEntityData
// ClassId: 3897
// RuntimeId: 27388
// TypeInfo: 0x0000000144F49CC0
#include "../Entity/EntityData.h"
#include "../Audio/VoiceOverNamedValue.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class VoiceOverObjectReaderWatcherEntityData : public Entity::EntityData {
        Array<Audio::VoiceOverNamedValue> VoObjectPropertiesArray; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverObjectReaderWatcherEntityData) == 0x28);
}
#pragma pack(pop)