// Object: CharacterSpawnTemplateData
// ClassId: 209
// RuntimeId: 40474
// TypeInfo: 0x0000000144E908E0
#include "../Core/Asset.h"
#include "../GameShared/CustomizeCharacterData.h"
#include "../GameShared/GameSensingTemplateData.h"
#include "../GameShared/GameBehaviourTemplateData.h"
#include "../GameShared/AnimationSpawnTemplate.h"
#include "../Audio/VoiceOverLabel.h"

#pragma pack(push, 8)
namespace GameShared {
    class CharacterSpawnTemplateData : public Core::Asset {
        GameShared::CustomizeCharacterData CustomizeCharacterData; // 0x20
        GameShared::GameSensingTemplateData Sensing; // 0x28
        GameShared::GameBehaviourTemplateData Behaviour; // 0x30
        GameShared::AnimationSpawnTemplate AnimationTemplate; // 0x38
        Array<Audio::VoiceOverLabel> VoiceOverLabels; // 0x40
    }; // 0x48
    static_assert(sizeof(CharacterSpawnTemplateData) == 0x48);
}
#pragma pack(pop)