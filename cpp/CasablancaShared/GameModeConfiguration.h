// Object: GameModeConfiguration
// ClassId: 514
// RuntimeId: 61485
// TypeInfo: 0x0000000144D095B0
#include "../Core/Asset.h"
#include "../CasablancaShared/GameModeInformation.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameModeConfiguration : public Core::Asset {
        Array<CasablancaShared::GameModeInformation> Information; // 0x20
    }; // 0x28
    static_assert(sizeof(GameModeConfiguration) == 0x28);
}
#pragma pack(pop)