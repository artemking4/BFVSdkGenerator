// Object: PrivateGamesBlueprints
// ClassId: 4465
// RuntimeId: 26528
// TypeInfo: 0x0000000144D6E0B0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/PrivateGamesBlueprint.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesBlueprints : public Core::DataContainer {
        Array<CasablancaShared::PrivateGamesBlueprint> Blueprints; // 0x18
    }; // 0x20
    static_assert(sizeof(PrivateGamesBlueprints) == 0x20);
}
#pragma pack(pop)