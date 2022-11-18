// Object: EncounterAIIntensityTree
// ClassId: 821
// RuntimeId: 64219
// TypeInfo: 0x0000000144D0B3B0
#include "../CasablancaShared/FootprintTreeBase.h"
#include "../CasablancaShared/EncounterAIIntensity.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterAIIntensityTree : public CasablancaShared::FootprintTreeBase {
        Array<CasablancaShared::EncounterAIIntensity> Intensities; // 0x20
    }; // 0x28
    static_assert(sizeof(EncounterAIIntensityTree) == 0x28);
}
#pragma pack(pop)