// Object: VoiceOverLocatorEntityData
// ClassId: 3480
// RuntimeId: 18773
// TypeInfo: 0x0000000144DC1D00
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Audio/EntityVoiceOverInfo.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class VoiceOverLocatorEntityData : public Entity::SpatialEntityData {
        Core::Realm Realm; // 0x60
        char pad_0x64[0x4];
        Audio::EntityVoiceOverInfo VoiceOverInfo; // 0x68
    }; // 0x70
    static_assert(sizeof(VoiceOverLocatorEntityData) == 0x70);
}
#pragma pack(pop)