// Object: UIRankDescription
// ClassId: 5408
// RuntimeId: 42645
// TypeInfo: 0x0000000144D98090
#include "../CasablancaShared/UIAbstractRankDescription.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIRankDescription : public CasablancaShared::UIAbstractRankDescription {
        Int32 Rank; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(UIRankDescription) == 0x58);
}
#pragma pack(pop)