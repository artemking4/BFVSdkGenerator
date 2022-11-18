// Object: ClientCameraInterpolateEntityData
// ClassId: 2475
// RuntimeId: 24582
// TypeInfo: 0x0000000144D5BA60
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"
#include "../UIIncubatorShared/PropertyInterpolationType.h"
#include "../UIIncubatorShared/PropertyInterpolationMode.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ClientCameraInterpolateEntityData : public Entity::EntityData {
        Float32 TargetFov; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform TargetTransform; // 0x30
        Core::LinearTransform SourceTransform; // 0x70
        Float32 SourceFov; // 0xB0
        Float32 TransitionSpeed; // 0xB4
        Float32 TransitionTime; // 0xB8
        Float32 RotationDelay; // 0xBC
        Float32 PositionDelay; // 0xC0
        Float32 FovDelay; // 0xC4
        UIIncubatorShared::PropertyInterpolationType EaseInPosition; // 0xC8
        UIIncubatorShared::PropertyInterpolationType EaseOutPosition; // 0xCC
        UIIncubatorShared::PropertyInterpolationMode PositionInterpolationMode; // 0xD0
        UIIncubatorShared::PropertyInterpolationType EaseInRotation; // 0xD4
        UIIncubatorShared::PropertyInterpolationType EaseOutRotation; // 0xD8
        UIIncubatorShared::PropertyInterpolationMode RotationInterpolationMode; // 0xDC
        UIIncubatorShared::PropertyInterpolationType EaseInFov; // 0xE0
        UIIncubatorShared::PropertyInterpolationType EaseOutFov; // 0xE4
        UIIncubatorShared::PropertyInterpolationMode FovInterpolationMode; // 0xE8
        Boolean InterpolateToPlayerFpsCamera; // 0xEC
        Boolean AllowInterpolationToPlayerCorpse; // 0xED
        Boolean UseSourceTransform; // 0xEE
        Boolean UsePlayerPositionAsTargetDirection; // 0xEF
        Boolean UpdateSourceEachFrame; // 0xF0
        char pad_0xF1[0xF];
    }; // 0x100
    static_assert(sizeof(ClientCameraInterpolateEntityData) == 0x100);
}
#pragma pack(pop)