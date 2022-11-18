// Object: BFUISpecTreeInstanceObject
// ClassId: 4118
// RuntimeId: 46250
// TypeInfo: 0x0000000144D83EA0
#include "../CasablancaShared/Identifiable.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISpecTreeInstanceObject : public CasablancaShared::Identifiable {
        char pad_0x18[0x20];
    }; // 0x38
    static_assert(sizeof(BFUISpecTreeInstanceObject) == 0x38);
}
#pragma pack(pop)