// Object: EncounterFlowPlayerSpawnSettings
// ClassId: 1548
// RuntimeId: 40019
// TypeInfo: 0x0000000144D0AC30
#include "../Core/DataContainer.h"
#include "../CasablancaShared/PlayerSpawnTypeSettings.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterFlowPlayerSpawnSettings : public Core::DataContainer {
        Array<CasablancaShared::PlayerSpawnTypeSettings> TypeSettings; // 0x18
    }; // 0x20
    static_assert(sizeof(EncounterFlowPlayerSpawnSettings) == 0x20);
}
#pragma pack(pop)