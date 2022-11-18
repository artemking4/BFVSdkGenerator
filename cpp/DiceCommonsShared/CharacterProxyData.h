// Object: CharacterProxyData
// ClassId: 3949
// RuntimeId: 61031
// TypeInfo: 0x0000000144DB5E10
#include "../DiceCommonsShared/BlueprintProxyData.h"
#include "../GameShared/CharacterSpawnTemplateData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class CharacterProxyData : public DiceCommonsShared::BlueprintProxyData {
        GameShared::CharacterSpawnTemplateData Template; // 0x110
        Boolean UseLocalPlayerCharacter; // 0x118
        char pad_0x119[0x7];
    }; // 0x120
    static_assert(sizeof(CharacterProxyData) == 0x120);
}
#pragma pack(pop)