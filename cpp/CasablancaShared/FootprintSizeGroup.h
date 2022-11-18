// Object: FootprintSizeGroup
// ClassId: 5283
// RuntimeId: 43184
// TypeInfo: 0x0000000144D09DB0
#include "../CasablancaShared/FootprintNodeBase.h"
#include "../CasablancaShared/FootprintSize.h"
#include "../CasablancaShared/FootprintNode.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FootprintSizeGroup : public CasablancaShared::FootprintNodeBase {
        CasablancaShared::FootprintSize Size; // 0x28
        Array<CasablancaShared::FootprintNode> Footprints; // 0x30
    }; // 0x38
    static_assert(sizeof(FootprintSizeGroup) == 0x38);
}
#pragma pack(pop)