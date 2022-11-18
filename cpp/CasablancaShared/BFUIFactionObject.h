// Object: BFUIFactionObject
// ClassId: 4109
// RuntimeId: 21909
// TypeInfo: 0x0000000144D7FE20
#include "../CasablancaShared/Identifiable.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIFactionObject : public CasablancaShared::Identifiable {
        char pad_0x18[0x10];
    }; // 0x28
    static_assert(sizeof(BFUIFactionObject) == 0x28);
}
#pragma pack(pop)