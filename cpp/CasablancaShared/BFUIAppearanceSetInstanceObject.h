// Object: BFUIAppearanceSetInstanceObject
// ClassId: 4107
// RuntimeId: 65365
// TypeInfo: 0x0000000144D7F720
#include "../CasablancaShared/BFUIAppearanceSetObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAppearanceSetInstanceObject : public CasablancaShared::BFUIAppearanceSetObject {
        char pad_0x28[0x10];
    }; // 0x38
    static_assert(sizeof(BFUIAppearanceSetInstanceObject) == 0x38);
}
#pragma pack(pop)