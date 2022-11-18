// Object: BFUIBodyObject
// ClassId: 4123
// RuntimeId: 35501
// TypeInfo: 0x0000000144D7FB20
#include "../CasablancaShared/BFUIUnlockObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBodyObject : public CasablancaShared::BFUIUnlockObject {
        char pad_0x28[0x10];
    }; // 0x38
    static_assert(sizeof(BFUIBodyObject) == 0x38);
}
#pragma pack(pop)