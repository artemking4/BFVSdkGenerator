// Object: PrivateGamesAvailableMutators
// ClassId: 4463
// RuntimeId: 61883
// TypeInfo: 0x0000000144D6DA30
#include "../Core/DataContainer.h"
#include "../CasablancaShared/AvailableMutator.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesAvailableMutators : public Core::DataContainer {
        Array<CasablancaShared::AvailableMutator> Mutators; // 0x18
    }; // 0x20
    static_assert(sizeof(PrivateGamesAvailableMutators) == 0x20);
}
#pragma pack(pop)