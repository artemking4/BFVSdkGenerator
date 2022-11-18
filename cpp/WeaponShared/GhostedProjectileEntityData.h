// Object: GhostedProjectileEntityData
// ClassId: 3318
// RuntimeId: 48572
// TypeInfo: 0x0000000144F7AF60
#include "../WeaponShared/MeshProjectileEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace WeaponShared {
    class GhostedProjectileEntityData : public WeaponShared::MeshProjectileEntityData {
        Float32 ProxyConvergenceDelay; // 0x140
        Float32 ProxyConvergenceDuration; // 0x144
        Boolean ProxyConvergenceInstantOnAttach; // 0x148
        Boolean ForceProxyConvergence; // 0x149
        Boolean ConvergenceUsingInitialSpeed; // 0x14A
        char pad_0x14B[0x5];
    }; // 0x150
    static_assert(sizeof(GhostedProjectileEntityData) == 0x150);
}
#pragma pack(pop)