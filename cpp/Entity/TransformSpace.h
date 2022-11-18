// Object: TransformSpace
// ClassId: 5237
// RuntimeId: 1370
// TypeInfo: 0x0000000144EE6C50
#include "../Core/DataContainer.h"
#include "../Core/LinearTransform.h"
#include "../Entity/TransformSpace.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace Entity {
    class TransformSpace : public Core::DataContainer {
        Entity::TransformSpace Parent; // 0x18
        Uint32 Id; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform LocalTransform; // 0x30
    }; // 0x70
    static_assert(sizeof(TransformSpace) == 0x70);
}
#pragma pack(pop)