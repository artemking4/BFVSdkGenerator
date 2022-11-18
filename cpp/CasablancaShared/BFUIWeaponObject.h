// Object: BFUIWeaponObject
// ClassId: 4129
// RuntimeId: 1730
// TypeInfo: 0x0000000144D7F620
#include "../CasablancaShared/BFUIWeaponClassObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponObject : public CasablancaShared::BFUIWeaponClassObject {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(BFUIWeaponObject) == 0x48);
}
#pragma pack(pop)