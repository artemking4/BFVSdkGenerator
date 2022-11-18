// Object: RepairToolWeaponData
// ClassId: 5218
// RuntimeId: 48137
// TypeInfo: 0x0000000144D3FE50
#include "../CasablancaShared/PowerToolWeaponData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RepairToolWeaponData : public CasablancaShared::PowerToolWeaponData {
        Float32 RechargeSpeed; // 0x70
        char pad_0x74[0x4];
    }; // 0x78
    static_assert(sizeof(RepairToolWeaponData) == 0x78);
}
#pragma pack(pop)