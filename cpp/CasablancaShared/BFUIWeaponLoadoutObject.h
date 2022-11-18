// Object: BFUIWeaponLoadoutObject
// ClassId: 4132
// RuntimeId: 55751
// TypeInfo: 0x0000000144D842A0
#include "../CasablancaShared/BFUIWeaponObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponLoadoutObject : public CasablancaShared::BFUIWeaponObject {
        char pad_0x48[0x48];
    }; // 0x90
    static_assert(sizeof(BFUIWeaponLoadoutObject) == 0x90);
}
#pragma pack(pop)