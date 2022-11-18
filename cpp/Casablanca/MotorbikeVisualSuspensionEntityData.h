// Object: MotorbikeVisualSuspensionEntityData
// ClassId: 2891
// RuntimeId: 4364
// TypeInfo: 0x0000000144C7ED80
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class MotorbikeVisualSuspensionEntityData : public Entity::EntityData {
        Float32 SmoothingFactor1P; // 0x20
        Float32 SmoothingFactor3P; // 0x24
        Float32 FrontWheelVisualAdjustment; // 0x28
        Boolean IsFirstPerson; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(MotorbikeVisualSuspensionEntityData) == 0x30);
}
#pragma pack(pop)