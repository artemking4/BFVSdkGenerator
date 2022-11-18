// Object: VoiceOverObjectReaderEntityData
// ClassId: 3896
// RuntimeId: 52638
// TypeInfo: 0x0000000144F49D40
#include "../Entity/EntityData.h"
#include "../Audio/VoiceOverNamedValue.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class VoiceOverObjectReaderEntityData : public Entity::EntityData {
        Array<Audio::VoiceOverNamedValue> VoObjectPropertiesArray; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverObjectReaderEntityData) == 0x28);
}
#pragma pack(pop)