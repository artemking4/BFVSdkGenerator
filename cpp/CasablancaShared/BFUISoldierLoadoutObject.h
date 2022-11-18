// Object: BFUISoldierLoadoutObject
// ClassId: 4117
// RuntimeId: 50810
// TypeInfo: 0x0000000144D84320
#include "../CasablancaShared/BFUISoldierKitObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierLoadoutObject : public CasablancaShared::BFUISoldierKitObject {
        char pad_0x48[0x88];
    }; // 0xD0
    static_assert(sizeof(BFUISoldierLoadoutObject) == 0xD0);
}
#pragma pack(pop)