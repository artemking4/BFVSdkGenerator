// Object: EncounterObjectiveLocation
// ClassId: 1549
// RuntimeId: 60633
// TypeInfo: 0x0000000144D0ABB0
#include "../Core/DataContainer.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class EncounterObjectiveLocation : public Core::DataContainer {
        char pad_0x18[0x8];
        Core::LinearTransform Transform; // 0x20
    }; // 0x60
    static_assert(sizeof(EncounterObjectiveLocation) == 0x60);
}
#pragma pack(pop)