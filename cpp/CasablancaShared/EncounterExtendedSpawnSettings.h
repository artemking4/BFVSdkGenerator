// Object: EncounterExtendedSpawnSettings
// ClassId: 1547
// RuntimeId: 47423
// TypeInfo: 0x0000000144D0B530
#include "../Core/DataContainer.h"
#include "../CasablancaShared/SpawnClusterSetting.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterExtendedSpawnSettings : public Core::DataContainer {
        CasablancaShared::SpawnClusterSetting GuardClusterSettings; // 0x18
        CasablancaShared::SpawnClusterSetting LocatorClusterSettings; // 0x28
        CasablancaShared::SpawnClusterSetting RandomPointClusterSettings; // 0x38
        CasablancaShared::SpawnClusterSetting ReinforcementClusterSettings; // 0x48
    }; // 0x58
    static_assert(sizeof(EncounterExtendedSpawnSettings) == 0x58);
}
#pragma pack(pop)