// Object: VolumeVectorShapeData
// ClassId: 1665
// RuntimeId: 47661
// TypeInfo: 0x0000000144EE36D0
#include "../Entity/VectorShapeData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class VolumeVectorShapeData : public Entity::VectorShapeData {
        Float32 Height; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(VolumeVectorShapeData) == 0x38);
}
#pragma pack(pop)