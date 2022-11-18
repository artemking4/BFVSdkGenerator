// Object: CharacterDefinition
// ClassId: 310
// RuntimeId: 27495
// TypeInfo: 0x0000000144DB5990
#include "../DiceCommonsShared/BaseDefinition.h"
#include "../DiceCommonsShared/UICharacterMetaData.h"
#include "../DiceCommonsShared/VoiceOverMetaData.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class CharacterDefinition : public DiceCommonsShared::BaseDefinition {
        DiceCommonsShared::UICharacterMetaData UIMetaData; // 0x30
        DiceCommonsShared::VoiceOverMetaData VoiceOverMetaData; // 0x38
    }; // 0x40
    static_assert(sizeof(CharacterDefinition) == 0x40);
}
#pragma pack(pop)