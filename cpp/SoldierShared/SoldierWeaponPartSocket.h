// Object: SoldierWeaponPartSocket
// ClassId: 4647
// RuntimeId: 23903
// TypeInfo: 0x0000000144F44530
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../SoldierShared/SoldierWeaponPartVariation.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierWeaponPartSocket : public Core::DataContainer {
        Array<SoldierShared::SoldierWeaponPartVariation> Variations; // 0x18
        Boolean IncludeInWeaponPickups; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(SoldierWeaponPartSocket) == 0x28);
}
#pragma pack(pop)