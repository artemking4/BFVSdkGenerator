// Object: CopyWheelRotationEntityData
// ClassId: 2531
// RuntimeId: 26912
// TypeInfo: 0x0000000144F70C00
#include "../VehicleShared/ComponentTransformEntityBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace VehicleShared {
    class CopyWheelRotationEntityData : public VehicleShared::ComponentTransformEntityBaseData {
        Float32 SteeringRotationScale; // 0x28
        Float32 RollingRotationScale; // 0x2C
        Float32 RollingWheelRadius; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(CopyWheelRotationEntityData) == 0x38);
}
#pragma pack(pop)