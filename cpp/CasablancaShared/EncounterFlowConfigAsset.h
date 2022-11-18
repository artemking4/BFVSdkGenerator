// Object: EncounterFlowConfigAsset
// ClassId: 353
// RuntimeId: 44136
// TypeInfo: 0x0000000144D0AEB0
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/EncounterFlowType.h"
#include "../CasablancaShared/EncounterFlowDifficultySettings.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterFlowConfigAsset : public Core::DataContainerPolicyAsset {
        CasablancaShared::EncounterFlowType EncounterFlowType; // 0x20
        Array<CasablancaShared::EncounterFlowDifficultySettings> FlowSettings; // 0x28
    }; // 0x30
    static_assert(sizeof(EncounterFlowConfigAsset) == 0x30);
}
#pragma pack(pop)