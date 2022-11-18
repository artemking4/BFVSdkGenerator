// Object: EncounterObjectiveSettings
// ClassId: 1550
// RuntimeId: 45571
// TypeInfo: 0x0000000144D0AFB0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterObjectiveSettings : public Core::DataContainer {
        Uint32 Min; // 0x18
        Uint32 Max; // 0x1C
        Boolean PreferObjectiveFootprintEntities; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(EncounterObjectiveSettings) == 0x28);
}
#pragma pack(pop)