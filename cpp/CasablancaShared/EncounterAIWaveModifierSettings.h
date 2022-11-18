// Object: EncounterAIWaveModifierSettings
// ClassId: 1544
// RuntimeId: 48441
// TypeInfo: 0x0000000144D0B130
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/EncounterAISettings.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterAIWaveModifierSettings : public Core::DataContainer {
        Uint32 MinWaveIndex; // 0x18
        Uint32 MaxWaveIndex; // 0x1C
        CasablancaShared::EncounterAISettings Modifier; // 0x20
        Boolean ApplyToAllInRange; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(EncounterAIWaveModifierSettings) == 0x30);
}
#pragma pack(pop)