// Object: EncounterAIIntensity
// ClassId: 5271
// RuntimeId: 23585
// TypeInfo: 0x0000000144D0B430
#include "../CasablancaShared/FootprintNodeBase.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterAIIntensity : public CasablancaShared::FootprintNodeBase {
        Uint32 MinPoints; // 0x28
        Uint32 MaxPoints; // 0x2C
    }; // 0x30
    static_assert(sizeof(EncounterAIIntensity) == 0x30);
}
#pragma pack(pop)