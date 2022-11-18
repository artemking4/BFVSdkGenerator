// Object: BFUIAppearanceSetObject
// ClassId: 4106
// RuntimeId: 23340
// TypeInfo: 0x0000000144D7F7A0
#include "../CasablancaShared/Identifiable.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAppearanceSetObject : public CasablancaShared::Identifiable {
        char pad_0x18[0x10];
    }; // 0x28
    static_assert(sizeof(BFUIAppearanceSetObject) == 0x28);
}
#pragma pack(pop)