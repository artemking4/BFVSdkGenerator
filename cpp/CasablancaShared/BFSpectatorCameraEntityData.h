// Object: BFSpectatorCameraEntityData
// ClassId: 3271
// RuntimeId: 57010
// TypeInfo: 0x0000000144D43050
#include "../GameShared/CameraEntityData.h"
#include "../GameShared/SpectatorViewType.h"
#include "../Global/Boolean.h"
#include "../GameShared/CameraBodyPreset.h"
#include "../GameShared/CameraLensPreset.h"
#include "../GameShared/ExposureMode.h"
#include "../GameShared/CameraData.h"
#include "../CasablancaShared/SpectatorCameraBoundsCheckingType.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFSpectatorCameraEntityData : public GameShared::CameraEntityData {
        GameShared::SpectatorViewType SpectatorMode; // 0xC0
        char pad_0xC4[0x4];
        GameShared::CameraBodyPreset PhysicalCameraBodyAsset; // 0xC8
        GameShared::CameraLensPreset PhysicalCameraLensAsset; // 0xD0
        GameShared::ExposureMode ExposureModeType; // 0xD8
        char pad_0xDC[0x4];
        Array<GameShared::CameraData> DefaultCameras; // 0xE0
        CasablancaShared::SpectatorCameraBoundsCheckingType BoundaryCheckingType; // 0xE8
        Boolean OnlyUsedForControllablePlayerView; // 0xEC
        Boolean IsControllablePlayerViewCamera; // 0xED
        Boolean UseTransformOverrideForCamTargetTransform; // 0xEE
        Boolean OnlyUseDefaultCameraData; // 0xEF
    }; // 0xF0
    static_assert(sizeof(BFSpectatorCameraEntityData) == 0xF0);
}
#pragma pack(pop)