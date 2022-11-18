// Object: EncounterConfigAsset
// ClassId: 352
// RuntimeId: 22144
// TypeInfo: 0x0000000144D0AF30
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/EncounterType.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/EncounterObjectiveSettings.h"
#include "../CasablancaShared/EncounterAISettings.h"
#include "../CasablancaShared/EncounterAIWaveSettings.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterConfigAsset : public Core::DataContainerPolicyAsset {
        CasablancaShared::EncounterType EncounterType; // 0x20
        CString EncounterTheme; // 0x28
        Uint32 EncounterThemeNameHash; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::EncounterObjectiveSettings Objectives; // 0x38
        CasablancaShared::EncounterAISettings Enemies; // 0x40
        CasablancaShared::EncounterAIWaveSettings Waves; // 0x48
    }; // 0x50
    static_assert(sizeof(EncounterConfigAsset) == 0x50);
}
#pragma pack(pop)