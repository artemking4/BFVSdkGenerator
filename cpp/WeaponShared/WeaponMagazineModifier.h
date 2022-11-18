// Object: WeaponMagazineModifier
// ClassId: 5680
// RuntimeId: 21985
// TypeInfo: 0x0000000144F7A660
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponMagazineModifier : public WeaponShared::WeaponModifierDynamicBase {
        Int32 MagazineCapacity; // 0x20
        Int32 NumberOfMagazines; // 0x24
        Int32 InitialAmmo; // 0x28
        Int32 StripperClipSize; // 0x2C
    }; // 0x30
    static_assert(sizeof(WeaponMagazineModifier) == 0x30);
}
#pragma pack(pop)