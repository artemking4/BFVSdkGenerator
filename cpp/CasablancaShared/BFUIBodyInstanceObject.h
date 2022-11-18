// Object: BFUIBodyInstanceObject
// ClassId: 4124
// RuntimeId: 21718
// TypeInfo: 0x0000000144D7FAA0
#include "../CasablancaShared/BFUIBodyObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBodyInstanceObject : public CasablancaShared::BFUIBodyObject {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(BFUIBodyInstanceObject) == 0x48);
}
#pragma pack(pop)