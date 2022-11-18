// Object: BFWeaponStateEntityData
// ClassId: 3916
// RuntimeId: 9780
// TypeInfo: 0x0000000144D3F6D0
#include "../SoldierShared/WeaponStateEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFWeaponStateEntityData : public SoldierShared::WeaponStateEntityData {
        Boolean HasOutputEvents; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(BFWeaponStateEntityData) == 0x40);
}
#pragma pack(pop)