// Object: SpriteDofParamConverterEntityData
// ClassId: 3502
// RuntimeId: 64884
// TypeInfo: 0x0000000144EE5350
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class SpriteDofParamConverterEntityData : public Entity::EntityData {
        Float32 SpriteDofOutFocusStart; // 0x20
        Float32 SpriteDofOutFocusEnd; // 0x24
        Float32 SpriteDofMaxBlurFactor; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(SpriteDofParamConverterEntityData) == 0x30);
}
#pragma pack(pop)