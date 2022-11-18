// Object: EncounterSpawnSettings
// ClassId: 355
// RuntimeId: 18107
// TypeInfo: 0x0000000144D0B4B0
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/EncounterBasicSpawnSettings.h"
#include "../CasablancaShared/EncounterExtendedSpawnSettings.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterSpawnSettings : public Core::DataContainerPolicyAsset {
        CasablancaShared::EncounterExtendedSpawnSettings ExtendedSpawnSettings; // 0x20
        CasablancaShared::EncounterBasicSpawnSettings BasicSpawnSettings; // 0x28
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(EncounterSpawnSettings) == 0x30);
}
#pragma pack(pop)