// Object: BFSpectator3pCameraInfoEntityData
// ClassId: 2453
// RuntimeId: 3541
// TypeInfo: 0x0000000144D42550
#include "../DiceShooterShared/CameraTransformerEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/Spectator3pSoldierCameraData.h"
#include "../Core/Vec3.h"
#include "../DiceShooterShared/QueryEntityResult.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFSpectator3pCameraInfoEntityData : public DiceShooterShared::CameraTransformerEntityData {
        Float32 CollisionWidthPadding; // 0x28
        char pad_0x2C[0x4];
        DiceShooterShared::QueryEntityResult ControllableResult; // 0x30
        Float32 VehicleJointPitchDegrees; // 0x40
        Float32 VehicleArmLengthScale; // 0x44
        char pad_0x48[0x8];
        CasablancaShared::Spectator3pSoldierCameraData SoldierCameraData; // 0x50
        CasablancaShared::Spectator3pSoldierCameraData SpectatorSoldierCameraData; // 0x530
        Core::Vec3 VehicleOffsetScale; // 0xA10
        Core::Vec3 CapturePointLookatOffset; // 0xA20
        Core::Vec3 CapturePointLocalOffset; // 0xA30
        Core::Vec3 HeadquartersLookatOffset; // 0xA40
        Core::Vec3 HeadquartersLocalOffset; // 0xA50
        Float32 VehicleMinArmLength; // 0xA60
        Float32 VehicleLookAtDistance; // 0xA64
        Float32 OrbitYawSpeedDegrees; // 0xA68
        Float32 SpawnPointCameraPitch; // 0xA6C
        Float32 SpawnPointMinArmLength; // 0xA70
        Float32 SpawnPointMaxArmLength; // 0xA74
        Boolean UsedAsSquadSpawnCamera; // 0xA78
        Boolean VehicleCameraCanRoll; // 0xA79
        char pad_0xA7A[0x6];
    }; // 0xA80
    static_assert(sizeof(BFSpectator3pCameraInfoEntityData) == 0xA80);
}
#pragma pack(pop)