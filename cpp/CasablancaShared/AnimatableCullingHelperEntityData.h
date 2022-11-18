// Object: AnimatableCullingHelperEntityData
// ClassId: 2051
// RuntimeId: 17910
// TypeInfo: 0x0000000144D29DA0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AnimatableCullingHelperEntityData : public Entity::EntityData {
        Float32 Speed; // 0x20
        Boolean Enabled; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(AnimatableCullingHelperEntityData) == 0x28);
}
#pragma pack(pop)