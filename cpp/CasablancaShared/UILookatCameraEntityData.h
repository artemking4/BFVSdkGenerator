// Object: UILookatCameraEntityData
// ClassId: 3729
// RuntimeId: 49439
// TypeInfo: 0x0000000144D5F7E0
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../UIIncubatorShared/PropertyInterpolationMode.h"
#include "../UIIncubatorShared/PropertyInterpolationType.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UILookatCameraEntityData : public Entity::EntityData {
        Float32 Duration; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform CameraTransform; // 0x30
        Core::LinearTransform LookAtTransform; // 0x70
        Float32 LookAtFactor; // 0xB0
        UIIncubatorShared::PropertyInterpolationMode InterpolationMode; // 0xB4
        UIIncubatorShared::PropertyInterpolationType InterpolationType; // 0xB8
        Boolean DisableInterpolation; // 0xBC
        Boolean IsWorldSpace; // 0xBD
        char pad_0xBE[0x2];
    }; // 0xC0
    static_assert(sizeof(UILookatCameraEntityData) == 0xC0);
}
#pragma pack(pop)