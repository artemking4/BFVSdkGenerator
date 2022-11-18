// Object: PrivateGamesMutators
// ClassId: 4469
// RuntimeId: 36540
// TypeInfo: 0x0000000144D6D9B0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/Mutator.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesMutators : public Core::DataContainer {
        Array<CasablancaShared::Mutator> Mutators; // 0x18
    }; // 0x20
    static_assert(sizeof(PrivateGamesMutators) == 0x20);
}
#pragma pack(pop)