// Object: VoiceOverLogicBundleEntityData
// ClassId: 3894
// RuntimeId: 54600
// TypeInfo: 0x0000000144C1DC80
#include "../Entity/EntityData.h"
#include "../Audio/VoiceOverLogicAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class VoiceOverLogicBundleEntityData : public Entity::EntityData {
        Array<Audio::VoiceOverLogicAsset> Assets; // 0x20
        Boolean LoadOnCreation; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(VoiceOverLogicBundleEntityData) == 0x30);
}
#pragma pack(pop)