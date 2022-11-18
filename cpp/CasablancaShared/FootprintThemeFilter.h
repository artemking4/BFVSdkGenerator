// Object: FootprintThemeFilter
// ClassId: 829
// RuntimeId: 26049
// TypeInfo: 0x0000000144D09A30
#include "../CasablancaShared/FootprintTreeBase.h"
#include "../CasablancaShared/GameModeNode.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FootprintThemeFilter : public CasablancaShared::FootprintTreeBase {
        Array<CasablancaShared::GameModeNode> GameModes; // 0x20
    }; // 0x28
    static_assert(sizeof(FootprintThemeFilter) == 0x28);
}
#pragma pack(pop)