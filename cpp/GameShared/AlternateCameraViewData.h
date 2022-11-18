// Object: AlternateCameraViewData
// ClassId: 103
// RuntimeId: 62501
// TypeInfo: 0x0000000144E81FC0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Render/RigidMeshAsset.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Core/Vec3.h"
#include "../GameShared/HudData.h"
#include "../GameShared/InputSuppressionData.h"
#include "../GameShared/ProfileOptionDataBool.h"

#pragma pack(push, 16)
namespace GameShared {
    class AlternateCameraViewData : public Core::DataContainer {
        Float32 FieldOfView; // 0x18
        Float32 FovTransitionTime; // 0x1C
        Core::Vec3 MeshOffset; // 0x20
        Float32 WorldSpaceLockEfficiency; // 0x30
        char pad_0x34[0x4];
        Render::RigidMeshAsset Mesh; // 0x38
        Entity::ObjectBlueprint MaskMeshBlueprint; // 0x40
        Array<GameShared::HudData> Hud; // 0x48
        Float32 FadeInDuration; // 0x50
        Float32 FadeOutDuration; // 0x54
        Float32 BlackDuration; // 0x58
        char pad_0x5C[0x4];
        GameShared::InputSuppressionData InputSuppression; // 0x60
        GameShared::ProfileOptionDataBool ToggleViewProfileOption; // 0x68
        Float32 ScreenExposureAreaScale; // 0x70
        Boolean AllowFieldOfViewScaling; // 0x74
        Boolean LockMeshToRenderView; // 0x75
        Boolean FadeToBlack; // 0x76
        Boolean ToggleViewChange; // 0x77
        Boolean FLIREnabled; // 0x78
        char pad_0x79[0x7];
    }; // 0x80
    static_assert(sizeof(AlternateCameraViewData) == 0x80);
}
#pragma pack(pop)