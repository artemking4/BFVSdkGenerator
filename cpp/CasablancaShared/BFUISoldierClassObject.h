// Object: BFUISoldierClassObject
// ClassId: 4113
// RuntimeId: 40645
// TypeInfo: 0x0000000144D7FDA0
#include "../CasablancaShared/Identifiable.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierClassObject : public CasablancaShared::Identifiable {
        char pad_0x18[0x10];
    }; // 0x28
    static_assert(sizeof(BFUISoldierClassObject) == 0x28);
}
#pragma pack(pop)