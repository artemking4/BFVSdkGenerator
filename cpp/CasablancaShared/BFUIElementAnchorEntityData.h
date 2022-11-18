// Object: BFUIElementAnchorEntityData
// ClassId: 3638
// RuntimeId: 7980
// TypeInfo: 0x0000000144D9CA10
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementAnchorEntityData : public CasablancaShared::BFUIElementEntityData {
        Boolean ForceOutputOfTransformedData; // 0x130
        char pad_0x131[0xF];
    }; // 0x140
    static_assert(sizeof(BFUIElementAnchorEntityData) == 0x140);
}
#pragma pack(pop)