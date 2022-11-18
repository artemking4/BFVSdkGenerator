// Object: PlayerCameraEntityData
// ClassId: 3274
// RuntimeId: 45617
// TypeInfo: 0x0000000144E833C0
#include "../GameShared/CameraEntityBaseData.h"
#include "../GameShared/TargetMode.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class PlayerCameraEntityData : public GameShared::CameraEntityBaseData {
        GameShared::TargetMode SoldierTargetMode; // 0xB0
        Uint32 SoldierCameraIndex; // 0xB4
        GameShared::TargetMode VehicleTargetMode; // 0xB8
        Uint32 VehicleCameraIndex; // 0xBC
        Float32 CameraSmoothingFactor; // 0xC0
        Boolean ReleaseControlIfTargetLost; // 0xC4
        Boolean ShouldTargetControllable; // 0xC5
        Boolean ShouldTargetVehicleDriverEntry; // 0xC6
        Boolean ShouldTargetExtraPlayerInDoublePlayerEvent; // 0xC7
        char pad_0xC8[0x8];
    }; // 0xD0
    static_assert(sizeof(PlayerCameraEntityData) == 0xD0);
}
#pragma pack(pop)