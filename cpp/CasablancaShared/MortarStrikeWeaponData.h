// Object: MortarStrikeWeaponData
// ClassId: 5215
// RuntimeId: 51132
// TypeInfo: 0x0000000144D3FAD0
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MortarStrikeWeaponData : public CasablancaShared::BFWeaponData {
        Float32 HoldingTolerance; // 0x28
        Float32 MaxStrikeDistance; // 0x2C
        Float32 StrikeRadius; // 0x30
        Float32 MaxRandomSpawnHeight; // 0x34
    }; // 0x38
    static_assert(sizeof(MortarStrikeWeaponData) == 0x38);
}
#pragma pack(pop)