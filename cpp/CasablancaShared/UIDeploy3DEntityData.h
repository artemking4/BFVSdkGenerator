// Object: UIDeploy3DEntityData
// ClassId: 3628
// RuntimeId: 40793
// TypeInfo: 0x0000000144D1F1F0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/BFSpawnPlayerResponse.h"
#include "../CasablancaShared/BFUISpawnPointObject.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDeploy3DEntityData : public Entity::EntityData {
        Float32 InvalidSelectionTimeOut; // 0x20
        Float32 InvalidDeployTimeOut; // 0x24
        Float32 RetryDeployInterval; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::BFSpawnPlayerResponse> RetryDeployOnServerResponse; // 0x30
        Array<CasablancaShared::BFSpawnPlayerResponse> RetrySpawnpointSelectionOnServerResponse; // 0x38
        CasablancaShared::BFUISpawnPointObject DefaultSpawnPoint; // 0x40
        CasablancaShared::BFUISoldierInstanceObject SoldierInstance; // 0x48
        CasablancaShared::BFUIVehicleInstanceObject VehicleInstance; // 0x50
        Float32 TimeUntilRespawnOverride; // 0x58
        Float32 MaxRespawnTimeOverride; // 0x5C
        Float32 DeployVerificationTimeout; // 0x60
        Boolean Enabled; // 0x64
        Boolean IsPVESpawn; // 0x65
        Boolean ValidateSpecTreeOnDeploy; // 0x66
        char pad_0x67[0x1];
    }; // 0x68
    static_assert(sizeof(UIDeploy3DEntityData) == 0x68);
}
#pragma pack(pop)