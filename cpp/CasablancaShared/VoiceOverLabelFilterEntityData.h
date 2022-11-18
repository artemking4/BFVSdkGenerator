// Object: VoiceOverLabelFilterEntityData
// ClassId: 3893
// RuntimeId: 40220
// TypeInfo: 0x0000000144D51050
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Audio/VoiceOverLabel.h"
#include "../Audio/VoiceOverLabelCompareMode.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VoiceOverLabelFilterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<Audio::VoiceOverLabel> VoiceOverLabels; // 0x28
        Audio::VoiceOverLabelCompareMode WantedCompareMode; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(VoiceOverLabelFilterEntityData) == 0x38);
}
#pragma pack(pop)