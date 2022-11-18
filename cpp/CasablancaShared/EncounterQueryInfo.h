// Object: EncounterQueryInfo
// ClassId: 1551
// RuntimeId: 32003
// TypeInfo: 0x0000000144D0AB30
#include "../Core/DataContainer.h"
#include "../Core/Vec3.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/EncounterObjectiveLocation.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class EncounterQueryInfo : public Core::DataContainer {
        Uint32 TypeId; // 0x18
        Uint32 ThemeId; // 0x1C
        Core::Vec3 Position; // 0x20
        Uint32 CombinedId; // 0x30
        Int32 UniqueId; // 0x34
        Int32 ObjectivesCompleted; // 0x38
        Int32 ObjectivesTotal; // 0x3C
        Int32 EnemiesAlive; // 0x40
        Int32 EnemiesTotal; // 0x44
        Array<CasablancaShared::EncounterObjectiveLocation> ObjectiveLocations; // 0x48
        Boolean ObjectivesFailed; // 0x50
        Boolean Completed; // 0x51
        char pad_0x52[0xE];
    }; // 0x60
    static_assert(sizeof(EncounterQueryInfo) == 0x60);
}
#pragma pack(pop)