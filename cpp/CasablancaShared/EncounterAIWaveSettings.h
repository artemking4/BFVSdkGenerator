// Object: EncounterAIWaveSettings
// ClassId: 1545
// RuntimeId: 35569
// TypeInfo: 0x0000000144D0B0B0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/IntensityProgression.h"
#include "../CasablancaShared/EncounterAIWaveModifierSettings.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterAIWaveSettings : public Core::DataContainer {
        Int32 MinWaves; // 0x18
        Int32 MaxWaves; // 0x1C
        CasablancaShared::IntensityProgression IntensityProgression; // 0x20
        Array<CasablancaShared::EncounterAIWaveModifierSettings> Modifiers; // 0x28
    }; // 0x30
    static_assert(sizeof(EncounterAIWaveSettings) == 0x30);
}
#pragma pack(pop)