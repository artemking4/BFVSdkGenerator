// Object: SimpleDofParamConverterEntityData
// ClassId: 3208
// RuntimeId: 49031
// TypeInfo: 0x0000000144EE52D0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class SimpleDofParamConverterEntityData : public Entity::EntityData {
        Float32 FocusDistance; // 0x20
        Float32 BlurFilterDeviation; // 0x24
        Float32 NearDistanceScale; // 0x28
        Float32 FarDistanceScale; // 0x2C
        Float32 Scale; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(SimpleDofParamConverterEntityData) == 0x38);
}
#pragma pack(pop)