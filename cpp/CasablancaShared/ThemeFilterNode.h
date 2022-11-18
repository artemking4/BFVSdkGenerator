// Object: ThemeFilterNode
// ClassId: 5285
// RuntimeId: 12669
// TypeInfo: 0x0000000144D09B30
#include "../CasablancaShared/FootprintNodeBase.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ThemeFilterNode : public CasablancaShared::FootprintNodeBase {
        Int32 MaxInstances; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ThemeFilterNode) == 0x30);
}
#pragma pack(pop)