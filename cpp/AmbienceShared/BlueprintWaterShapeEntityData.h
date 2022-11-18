// Object: BlueprintWaterShapeEntityData
// ClassId: 2437
// RuntimeId: 62204
// TypeInfo: 0x0000000144BDFAE0
#include "../Entity/EntityData.h"
#include "../AmbienceShared/BlueprintWaterShapeData.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class BlueprintWaterShapeEntityData : public Entity::EntityData {
        AmbienceShared::BlueprintWaterShapeData WaterShape; // 0x20
    }; // 0x28
    static_assert(sizeof(BlueprintWaterShapeEntityData) == 0x28);
}
#pragma pack(pop)