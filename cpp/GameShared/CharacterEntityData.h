// Object: CharacterEntityData
// ClassId: 3300
// RuntimeId: 36375
// TypeInfo: 0x0000000144E82EC0
#include "../GameShared/ControllableEntityData.h"
#include "../GameShared/ANTCharacterReadBinding.h"
#include "../Global/Float32.h"
#include "../GameShared/PersonViewMode.h"
#include "../GameShared/PlayerSpawnType.h"
#include "../Global/Boolean.h"
#include "../Audio/EntityVoiceOverInfo.h"
#include "../GameShared/CharacterSoundData.h"

#pragma pack(push, 16)
namespace GameShared {
    class CharacterEntityData : public GameShared::ControllableEntityData {
        GameShared::ANTCharacterReadBinding AntReadGamestateBinding; // 0xC0
        Float32 MaxHealth; // 0xD4
        GameShared::PersonViewMode DefaultViewMode; // 0xD8
        GameShared::PlayerSpawnType PlayerSpawnType; // 0xDC
        Audio::EntityVoiceOverInfo VoiceOverInfo; // 0xE0
        GameShared::CharacterSoundData Sound; // 0xE8
        Boolean CharacterLightingEnable; // 0xF0
        char pad_0xF1[0xF];
    }; // 0x100
    static_assert(sizeof(CharacterEntityData) == 0x100);
}
#pragma pack(pop)