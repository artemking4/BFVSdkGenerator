// Object: UIGlobeCameraEntityData
// ClassId: 3714
// RuntimeId: 43490
// TypeInfo: 0x0000000144D215F0
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIGlobeCameraEntityData : public Entity::EntityData {
        Float32 DefaultFov; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform DefaultTransform; // 0x30
        Core::LinearTransform TargetTransform; // 0x70
        Float32 TargetFov; // 0xB0
        Float32 TransitionSpeed; // 0xB4
        char pad_0xB8[0x8];
    }; // 0xC0
    static_assert(sizeof(UIGlobeCameraEntityData) == 0xC0);
}
#pragma pack(pop)