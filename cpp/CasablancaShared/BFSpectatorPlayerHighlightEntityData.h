// Object: BFSpectatorPlayerHighlightEntityData
// ClassId: 2139
// RuntimeId: 65410
// TypeInfo: 0x0000000144D426D0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISquadObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorPlayerHighlightEntityData : public Entity::EntityData {
        CasablancaShared::BFUISquadObject SquadToHighlight; // 0x20
        CasablancaShared::BFUISquadObject Team1SquadToHighlight; // 0x28
        CasablancaShared::BFUISquadObject Team2SquadToHighlight; // 0x30
        Boolean SquadHighlightsEnabled; // 0x38
        Boolean PlayerHighlightsEnabled; // 0x39
        Boolean Team1HighlightsEnabled; // 0x3A
        Boolean Team2HighlightsEnabled; // 0x3B
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(BFSpectatorPlayerHighlightEntityData) == 0x40);
}
#pragma pack(pop)