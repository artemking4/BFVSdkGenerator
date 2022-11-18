// Object: BFUISoldierInstanceObject
// ClassId: 4116
// RuntimeId: 14211
// TypeInfo: 0x0000000144D7FC20
#include "../CasablancaShared/BFUISoldierKitObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierInstanceObject : public CasablancaShared::BFUISoldierKitObject {
        char pad_0x48[0x10];
    }; // 0x58
    static_assert(sizeof(BFUISoldierInstanceObject) == 0x58);
}
#pragma pack(pop)