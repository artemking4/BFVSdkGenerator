// Object: BFSpectatorOverviewCameraInputHandlerEntityData
// ClassId: 2135
// RuntimeId: 760
// TypeInfo: 0x0000000144D42A50
#include "../CasablancaShared/BFSpectatorInputHandlerEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFSpectatorOverviewCameraInputHandlerEntityData : public CasablancaShared::BFSpectatorInputHandlerEntityData {
        char pad_0x28[0x8];
        Core::Vec3 Selected3DPointPosition; // 0x30
        Float32 MinMovementPanSpeedMultiplier; // 0x40
        Float32 MaxMovementPanSpeedMultiplier; // 0x44
        Float32 MinMovementZoomSpeedMultiplier; // 0x48
        Float32 MaxMovementZoomSpeedMultiplier; // 0x4C
        Uint32 NumSpeedLevels; // 0x50
        Uint32 NumQuickZoomLevels; // 0x54
        Uint32 NumQuickZoomLevelsHalfDistance; // 0x58
        Float32 TotalQuickZoomTime; // 0x5C
        Float32 DropCamCollisionRadius; // 0x60
        Float32 MovementPanSpeedMultiplier; // 0x64
        Float32 MovementZoomSpeedMultiplier; // 0x68
        char pad_0x6C[0x4];
        CasablancaShared::BFUIPlayerObject SelectedPlayer; // 0x70
        Boolean CanDoubleMouseClickToDropCam; // 0x78
        Boolean CanQuickZoom; // 0x79
        Boolean CanZoomCamera; // 0x7A
        Boolean CanMoveCameraLeftRight; // 0x7B
        Boolean CanMoveCameraForwardBackward; // 0x7C
        Boolean EnableAutoFollow; // 0x7D
        char pad_0x7E[0x2];
    }; // 0x80
    static_assert(sizeof(BFSpectatorOverviewCameraInputHandlerEntityData) == 0x80);
}
#pragma pack(pop)