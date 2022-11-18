// Object: AnimatableCullingEntityData
// ClassId: 2050
// RuntimeId: 18423
// TypeInfo: 0x0000000144D29E20
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/EntityCullingLevel.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AnimatableCullingEntityData : public Entity::EntityData {
        CasablancaShared::EntityCullingLevel CullingLevel; // 0x20
        Int32 CullingLevelPriority; // 0x24
        Boolean Enabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(AnimatableCullingEntityData) == 0x30);
}
#pragma pack(pop)