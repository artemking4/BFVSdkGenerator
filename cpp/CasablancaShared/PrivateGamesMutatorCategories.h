// Object: PrivateGamesMutatorCategories
// ClassId: 4468
// RuntimeId: 25956
// TypeInfo: 0x0000000144D6D8B0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/MutatorCategory.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesMutatorCategories : public Core::DataContainer {
        Array<CasablancaShared::MutatorCategory> Categories; // 0x18
    }; // 0x20
    static_assert(sizeof(PrivateGamesMutatorCategories) == 0x20);
}
#pragma pack(pop)