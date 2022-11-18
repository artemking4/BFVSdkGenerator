// Object: BFUIAppearanceObject
// ClassId: 4121
// RuntimeId: 54065
// TypeInfo: 0x0000000144D7F9A0
#include "../CasablancaShared/BFUIUnlockObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAppearanceObject : public CasablancaShared::BFUIUnlockObject {
        char pad_0x28[0x10];
    }; // 0x38
    static_assert(sizeof(BFUIAppearanceObject) == 0x38);
}
#pragma pack(pop)