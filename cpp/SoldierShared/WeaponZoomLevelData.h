// Object: WeaponZoomLevelData
// ClassId: 5702
// RuntimeId: 23594
// TypeInfo: 0x0000000144F446B0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../GameShared/FOVTransitionData.h"
#include "../SoldierShared/SightType.h"
#include "../SoldierShared/WeaponAnimationSettingsData.h"
#include "../WorldSim/VisualEnvironmentBlueprint.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponZoomLevelData : public Core::DataContainer {
        Float32 RenderFov; // 0x18
        char pad_0x1C[0x4];
        GameShared::FOVTransitionData RenderFovTransition; // 0x20
        Array<Float32> ZoomInOutMeshTransitionFactors; // 0x28
        Float32 ZoomDisabledTransitionTimer; // 0x30
        SoldierShared::SightType SightType; // 0x34
        SoldierShared::WeaponAnimationSettingsData AnimationSettings; // 0x38
        WorldSim::VisualEnvironmentBlueprint ZoomLevelVisualEnvironment; // 0x80
        Boolean SupportedOnly; // 0x88
        Boolean ForceDisableZoomMeshesFor1p; // 0x89
        char pad_0x8A[0x6];
    }; // 0x90
    static_assert(sizeof(WeaponZoomLevelData) == 0x90);
}
#pragma pack(pop)