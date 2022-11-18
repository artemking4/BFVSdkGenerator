// Object: MutatorCategory
// ClassId: 4348
// RuntimeId: 2635
// TypeInfo: 0x0000000144D6D930
#include "../Core/DataContainer.h"
#include "../CasablancaShared/MutatorCategoryType.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedString.h"
#include "../CasablancaShared/PrivateGamesAvailableMutators.h"
#include "../CasablancaShared/PrivateGamesMutators.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MutatorCategory : public Core::DataContainer {
        CasablancaShared::MutatorCategoryType CategoryType; // 0x18
        char pad_0x1C[0x4];
        CString Name; // 0x20
        UIIncubatorShared::LocalizedString LocalizedName; // 0x28
        UIIncubatorShared::LocalizedString LocalizedDescription; // 0x30
        CasablancaShared::PrivateGamesAvailableMutators AvailableMutators; // 0x38
        CasablancaShared::PrivateGamesMutators Mutators; // 0x40
    }; // 0x48
    static_assert(sizeof(MutatorCategory) == 0x48);
}
#pragma pack(pop)