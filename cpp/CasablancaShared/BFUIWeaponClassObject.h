// Object: BFUIWeaponClassObject
// ClassId: 4128
// RuntimeId: 54629
// TypeInfo: 0x0000000144D7F6A0
#include "../CasablancaShared/BFUIUnlockObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponClassObject : public CasablancaShared::BFUIUnlockObject {
        char pad_0x28[0x10];
    }; // 0x38
    static_assert(sizeof(BFUIWeaponClassObject) == 0x38);
}
#pragma pack(pop)