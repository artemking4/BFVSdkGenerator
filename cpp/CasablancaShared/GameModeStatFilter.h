// Object: GameModeStatFilter
// ClassId: 515
// RuntimeId: 29068
// TypeInfo: 0x0000000144D09430
#include "../Core/Asset.h"
#include "../CasablancaShared/StatFilterObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameModeStatFilter : public Core::Asset {
        Array<CasablancaShared::StatFilterObject> GameModes; // 0x20
    }; // 0x28
    static_assert(sizeof(GameModeStatFilter) == 0x28);
}
#pragma pack(pop)