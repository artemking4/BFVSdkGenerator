// Object: BFNamedCharacterSpawnTemplateData
// ClassId: 211
// RuntimeId: 2516
// TypeInfo: 0x0000000144CFBC50
#include "../GameShared/CharacterSpawnTemplateData.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFNamedCharacterSpawnTemplateData : public GameShared::CharacterSpawnTemplateData {
        CString DisplayName; // 0x48
        Boolean OnHumanSquad; // 0x50
        Boolean IsSquadLeader; // 0x51
        char pad_0x52[0x6];
    }; // 0x58
    static_assert(sizeof(BFNamedCharacterSpawnTemplateData) == 0x58);
}
#pragma pack(pop)