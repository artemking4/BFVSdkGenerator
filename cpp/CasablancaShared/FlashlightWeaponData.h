// Object: FlashlightWeaponData
// ClassId: 5204
// RuntimeId: 58541
// TypeInfo: 0x0000000144D3FCD0
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FlashlightWeaponData : public CasablancaShared::BFWeaponData {
        Float32 UpdateFrequency; // 0x28
        Float32 Range; // 0x2C
        Float32 Angle; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(FlashlightWeaponData) == 0x38);
}
#pragma pack(pop)