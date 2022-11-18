// Object: RaycastDirectionEntityData
// ClassId: 3101
// RuntimeId: 39566
// TypeInfo: 0x0000000144DBED30
#include "../Entity/EntityData.h"
#include "../DiceCommonsShared/EntityAttachData.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class RaycastDirectionEntityData : public Entity::EntityData {
        DiceCommonsShared::EntityAttachData Attach; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform Transform; // 0x30
        Float32 RayHorizontalAngle; // 0x70
        Float32 RayVerticalAngle; // 0x74
        Float32 RayDistance; // 0x78
        Boolean ContinuousUpdate; // 0x7C
        Boolean LockHorizontalRotation; // 0x7D
        Boolean LockVerticalRotation; // 0x7E
        char pad_0x7F[0x1];
    }; // 0x80
    static_assert(sizeof(RaycastDirectionEntityData) == 0x80);
}
#pragma pack(pop)