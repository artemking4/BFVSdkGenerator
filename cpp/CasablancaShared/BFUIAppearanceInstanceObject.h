// Object: BFUIAppearanceInstanceObject
// ClassId: 4122
// RuntimeId: 46577
// TypeInfo: 0x0000000144D7F8A0
#include "../CasablancaShared/BFUIAppearanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAppearanceInstanceObject : public CasablancaShared::BFUIAppearanceObject {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(BFUIAppearanceInstanceObject) == 0x48);
}
#pragma pack(pop)