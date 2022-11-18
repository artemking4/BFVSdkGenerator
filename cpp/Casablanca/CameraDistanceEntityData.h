// Object: CameraDistanceEntityData
// ClassId: 2447
// RuntimeId: 64005
// TypeInfo: 0x0000000144C32A70
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Casablanca {
    class CameraDistanceEntityData : public Entity::EntityData {
        Float32 MaxTestDistance; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform TransformIn; // 0x30
        Boolean QueryContinously; // 0x70
        Boolean DirectionalAngle; // 0x71
        char pad_0x72[0xE];
    }; // 0x80
    static_assert(sizeof(CameraDistanceEntityData) == 0x80);
}
#pragma pack(pop)