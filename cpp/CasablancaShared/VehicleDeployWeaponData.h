// Object: VehicleDeployWeaponData
// ClassId: 5230
// RuntimeId: 37018
// TypeInfo: 0x0000000144D406D0
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/VehicleDeployWeaponCollisionType.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class VehicleDeployWeaponData : public CasablancaShared::BFWeaponData {
        char pad_0x28[0x8];
        Core::Vec3 SoldierRelativeSpawnOffset; // 0x30
        Float32 AlignPreviewWithSurfaceLerpSpeed; // 0x40
        Float32 ClearSkyCheckRayLength; // 0x44
        Float32 ClearSkyBoxCheckAngleRadians; // 0x48
        CasablancaShared::VehicleDeployWeaponCollisionType DeployCollisionType; // 0x4C
        Float32 DeployAreaRadius; // 0x50
        Float32 InBetweenRadius; // 0x54
        Float32 DeployAreaGroundRayLength; // 0x58
        Float32 DeployAreaGroundFlatness; // 0x5C
        Float32 MinDistanceToExplosionPacks; // 0x60
        char pad_0x64[0x4];
        Entity::ObjectBlueprint PreviewObject; // 0x68
        Entity::ObjectBlueprint PreviewObjectCrouch; // 0x70
        Entity::ObjectBlueprint PreviewObjectProne; // 0x78
        Boolean CanRemoteEnterVehicle; // 0x80
        Boolean UsePreview; // 0x81
        Boolean CanDeployUnderWater; // 0x82
        Boolean AlignPreviewWithSurface; // 0x83
        Boolean CheckForObstaclesBetween; // 0x84
        Boolean IfFailedRetryTestUnderSoldier; // 0x85
        Boolean CheckClearSky; // 0x86
        Boolean IsAllowedToPickupDeployedVehicle; // 0x87
        Boolean SameRadiusForInBetweenCheck; // 0x88
        Boolean AllowMultipleDeployedVehicles; // 0x89
        Boolean OutlineEdgeDetect; // 0x8A
        Boolean UseDeployPosAsProjectilePos; // 0x8B
        Boolean UseSoldierRelativeSpawning; // 0x8C
        char pad_0x8D[0x3];
    }; // 0x90
    static_assert(sizeof(VehicleDeployWeaponData) == 0x90);
}
#pragma pack(pop)