// Object: HealingItemData
// ClassId: 5205
// RuntimeId: 16579
// TypeInfo: 0x0000000144D01FA0
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class HealingItemData : public CasablancaShared::BFWeaponData {
        Float32 MaxHealPercentage; // 0x28
        Float32 HealingDuration; // 0x2C
    }; // 0x30
    static_assert(sizeof(HealingItemData) == 0x30);
}
#pragma pack(pop)