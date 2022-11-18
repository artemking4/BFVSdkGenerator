// Object: PrivateGamesMapRotationItems
// ClassId: 4467
// RuntimeId: 987
// TypeInfo: 0x0000000144D6DAB0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/PrivateGamesMapRotationItem.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesMapRotationItems : public Core::DataContainer {
        Array<CasablancaShared::PrivateGamesMapRotationItem> Items; // 0x18
    }; // 0x20
    static_assert(sizeof(PrivateGamesMapRotationItems) == 0x20);
}
#pragma pack(pop)