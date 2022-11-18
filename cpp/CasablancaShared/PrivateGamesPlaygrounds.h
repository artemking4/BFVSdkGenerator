// Object: PrivateGamesPlaygrounds
// ClassId: 4471
// RuntimeId: 38531
// TypeInfo: 0x0000000144D6DCB0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/PrivateGamesPlayground.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesPlaygrounds : public Core::DataContainer {
        Array<CasablancaShared::PrivateGamesPlayground> Playgrounds; // 0x18
    }; // 0x20
    static_assert(sizeof(PrivateGamesPlaygrounds) == 0x20);
}
#pragma pack(pop)