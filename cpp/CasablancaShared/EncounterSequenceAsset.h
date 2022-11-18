// Object: EncounterSequenceAsset
// ClassId: 354
// RuntimeId: 28371
// TypeInfo: 0x0000000144D0AE30
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/EncounterConfigAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterSequenceAsset : public Core::DataContainerPolicyAsset {
        Array<CasablancaShared::EncounterConfigAsset> EncounterSequence; // 0x20
    }; // 0x28
    static_assert(sizeof(EncounterSequenceAsset) == 0x28);
}
#pragma pack(pop)