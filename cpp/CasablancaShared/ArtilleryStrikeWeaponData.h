// Object: ArtilleryStrikeWeaponData
// ClassId: 5196
// RuntimeId: 51031
// TypeInfo: 0x0000000144D3FA50
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/TargetCameraData.h"
#include "../CasablancaShared/ArtilleryDispersionData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ArtilleryStrikeWeaponData : public CasablancaShared::BFWeaponData {
        Float32 MaxStrikeDistance; // 0x28
        Float32 StrikeRadius; // 0x2C
        Float32 SpawnHeight; // 0x30
        Float32 MaxRandomSpawnHeight; // 0x34
        Float32 SpawnHeightMultiplier; // 0x38
        char pad_0x3C[0x4];
        GameShared::TargetCameraData Camera; // 0x40
        Float32 AimingCameraHeight; // 0x48
        Float32 StrikeCameraHeight; // 0x4C
        Float32 AimingCameraOffset; // 0x50
        Float32 StrikeCameraOffset; // 0x54
        Float32 AimingCameraFov; // 0x58
        Float32 DelayBeforeAimingCamera; // 0x5C
        Float32 StrikeCameraFov; // 0x60
        Float32 FireCameraTime; // 0x64
        Float32 StrikeCameraTime; // 0x68
        Float32 ValidMinDistance; // 0x6C
        Float32 ValidMaxDistance; // 0x70
        Float32 ValidMaxAngle; // 0x74
        CasablancaShared::ArtilleryDispersionData ArtilleryDispersion; // 0x78
        Boolean IncreaseSpawnHeightWithDistance; // 0x94
        Boolean EnableProjectileTrails; // 0x95
        Boolean EnableCameraRotation; // 0x96
        char pad_0x97[0x1];
    }; // 0x98
    static_assert(sizeof(ArtilleryStrikeWeaponData) == 0x98);
}
#pragma pack(pop)