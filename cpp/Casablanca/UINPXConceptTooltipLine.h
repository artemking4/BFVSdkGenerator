// Object: UINPXConceptTooltipLine
// ClassId: 5446
// RuntimeId: 26281
// TypeInfo: 0x0000000144C7F480
#include "../Casablanca/UINPXLine.h"
#include "../Global/CString.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UINPXConceptTooltipLine : public Casablanca::UINPXLine {
        CString ActionMapsId; // 0x50
        GameShared::InputConceptIdentifiers ConceptIdentifier; // 0x58
        char pad_0x5C[0x4];
    }; // 0x60
    static_assert(sizeof(UINPXConceptTooltipLine) == 0x60);
}
#pragma pack(pop)