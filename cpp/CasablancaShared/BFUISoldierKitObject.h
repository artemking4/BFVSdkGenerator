// Object: BFUISoldierKitObject
// ClassId: 4115
// RuntimeId: 47769
// TypeInfo: 0x0000000144D7FCA0
#include "../CasablancaShared/BFUISoldierArchetypeObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierKitObject : public CasablancaShared::BFUISoldierArchetypeObject {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(BFUISoldierKitObject) == 0x48);
}
#pragma pack(pop)