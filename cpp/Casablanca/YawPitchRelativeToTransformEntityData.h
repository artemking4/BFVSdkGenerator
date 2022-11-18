// Object: YawPitchRelativeToTransformEntityData
// ClassId: 3929
// RuntimeId: 26486
// TypeInfo: 0x0000000144C831C0
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Casablanca {
    class YawPitchRelativeToTransformEntityData : public Entity::EntityData {
        Core::LinearTransform HeadTransform; // 0x20
        Core::LinearTransform PointTowards; // 0x60
    }; // 0xA0
    static_assert(sizeof(YawPitchRelativeToTransformEntityData) == 0xA0);
}
#pragma pack(pop)