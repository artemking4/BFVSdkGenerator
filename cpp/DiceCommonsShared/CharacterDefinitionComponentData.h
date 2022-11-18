// Object: CharacterDefinitionComponentData
// ClassId: 1740
// RuntimeId: 19961
// TypeInfo: 0x0000000144DB6310
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../DiceCommonsShared/CharacterDefinition.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class CharacterDefinitionComponentData : public Entity::GameComponentData {
        Core::Realm Realm; // 0x80
        char pad_0x84[0x4];
        DiceCommonsShared::CharacterDefinition CharacterDefinition; // 0x88
    }; // 0x90
    static_assert(sizeof(CharacterDefinitionComponentData) == 0x90);
}
#pragma pack(pop)