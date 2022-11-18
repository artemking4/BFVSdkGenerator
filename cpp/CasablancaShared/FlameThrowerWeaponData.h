// Object: FlameThrowerWeaponData
// ClassId: 5203
// RuntimeId: 64417
// TypeInfo: 0x0000000144D400D0
#include "../CasablancaShared/BFWeaponData.h"
#include "../CasablancaShared/FlameProbeProjectileEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FlameThrowerWeaponData : public CasablancaShared::BFWeaponData {
        CasablancaShared::FlameProbeProjectileEntityData ProbeProjectileData; // 0x28
        Float32 FlameProbeInterval; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(FlameThrowerWeaponData) == 0x38);
}
#pragma pack(pop)