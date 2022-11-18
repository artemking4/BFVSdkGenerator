// Object: InterpolateTransformEntityData
// ClassId: 2812
// RuntimeId: 24861
// TypeInfo: 0x0000000144C82B40
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class InterpolateTransformEntityData : public Entity::EntityData {
        Boolean AutoActivate; // 0x20
        char pad_0x21[0xF];
        Core::LinearTransform InputTransform; // 0x30
    }; // 0x70
    static_assert(sizeof(InterpolateTransformEntityData) == 0x70);
}
#pragma pack(pop)