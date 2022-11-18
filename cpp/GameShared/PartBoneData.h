// Object: PartBoneData
// ClassId: 2932
// RuntimeId: 38771
// TypeInfo: 0x0000000144E82840
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class PartBoneData : public Entity::EntityData {
        Boolean IsTransformInputLocal; // 0x20
        char pad_0x21[0xF];
        Core::LinearTransform Transform; // 0x30
    }; // 0x70
    static_assert(sizeof(PartBoneData) == 0x70);
}
#pragma pack(pop)