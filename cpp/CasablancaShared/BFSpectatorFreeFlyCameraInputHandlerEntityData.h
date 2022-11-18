// Object: BFSpectatorFreeFlyCameraInputHandlerEntityData
// ClassId: 2134
// RuntimeId: 14096
// TypeInfo: 0x0000000144D42B50
#include "../CasablancaShared/BFSpectatorInputHandlerEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Core/FloatCurve.h"
#include "../CasablancaShared/BFSpectatorSoldierOffsetData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFSpectatorFreeFlyCameraInputHandlerEntityData : public CasablancaShared::BFSpectatorInputHandlerEntityData {
        char pad_0x28[0x8];
        CasablancaShared::BFSpectatorSoldierOffsetData SoldierLookAtOffset; // 0x30
        Float32 MinMovementSpeedMultiplier; // 0x100
        Float32 MaxMovementSpeedMultiplier; // 0x104
        Float32 MinRotationSpeedMultiplier; // 0x108
        Float32 MaxRotationSpeedMultiplier; // 0x10C
        Uint32 NumSpeedLevels; // 0x110
        char pad_0x114[0x4];
        Core::FloatCurve RotateSpeedCurve; // 0x118
        Float32 BoundingRadiusMultiplier; // 0x120
        Float32 LookedAtPlayerCacheTimer; // 0x124
        Float32 ZoomSpeedMultiplier; // 0x128
        Float32 CameraRollDegrees; // 0x12C
        Float32 CameraFieldOfView; // 0x130
        Float32 RotationBufferZoneWidth; // 0x134
        Float32 MovementSpeedMultiplier; // 0x138
        Float32 RotationSpeedMultiplier; // 0x13C
        CasablancaShared::BFUIPlayerObject LookAtCameraTarget; // 0x140
        Boolean CameraYawEnabled; // 0x148
        Boolean CameraPitchEnabled; // 0x149
        Boolean CameraRollEnabled; // 0x14A
        Boolean PlayerSelectionEnabled; // 0x14B
        Boolean SwitchSpeedEnabled; // 0x14C
        Boolean CanMoveCameraUpDown; // 0x14D
        Boolean CanMoveCameraLeftRight; // 0x14E
        Boolean CanMoveCameraForwardBackward; // 0x14F
        Boolean UseInputPositionRotationMode; // 0x150
        Boolean LookAtSelectedPlayer; // 0x151
        char pad_0x152[0xE];
    }; // 0x160
    static_assert(sizeof(BFSpectatorFreeFlyCameraInputHandlerEntityData) == 0x160);
}
#pragma pack(pop)