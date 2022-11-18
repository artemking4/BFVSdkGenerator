// Object: IndirectFireWeaponData
// ClassId: 5206
// RuntimeId: 53519
// TypeInfo: 0x0000000144D40650
#include "../CasablancaShared/BFWeaponData.h"
#include "../CasablancaShared/IndirectFireDispersionData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class IndirectFireWeaponData : public CasablancaShared::BFWeaponData {
        CasablancaShared::IndirectFireDispersionData Dispersion; // 0x28
        Float32 DelayBeforeAimingCamera; // 0x44
    }; // 0x48
    static_assert(sizeof(IndirectFireWeaponData) == 0x48);
}
#pragma pack(pop)