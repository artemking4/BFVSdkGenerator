// Object: GameModeNode
// ClassId: 5284
// RuntimeId: 27791
// TypeInfo: 0x0000000144D09AB0
#include "../CasablancaShared/FootprintNodeBase.h"
#include "../CasablancaShared/ThemeFilterNode.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameModeNode : public CasablancaShared::FootprintNodeBase {
        Array<CasablancaShared::ThemeFilterNode> ThemeFilters; // 0x28
    }; // 0x30
    static_assert(sizeof(GameModeNode) == 0x30);
}
#pragma pack(pop)