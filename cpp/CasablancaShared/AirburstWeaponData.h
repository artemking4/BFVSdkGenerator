// Object: AirburstWeaponData
// ClassId: 5194
// RuntimeId: 49452
// TypeInfo: 0x0000000144D405D0
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AirburstWeaponData : public CasablancaShared::BFWeaponData {
        Float32 OvershootOffset; // 0x28
        Float32 MaximumDistance; // 0x2C
        Float32 SafetyDistance; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(AirburstWeaponData) == 0x38);
}
#pragma pack(pop)