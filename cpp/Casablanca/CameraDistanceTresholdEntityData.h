// Object: CameraDistanceTresholdEntityData
// ClassId: 2449
// RuntimeId: 57929
// TypeInfo: 0x0000000144C329F0
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class CameraDistanceTresholdEntityData : public Entity::EntityData {
        Int32 UpdateEveryNTick; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform TransformIn; // 0x30
        Float32 DistanceTreshold; // 0x70
        Float32 ThresholdPadding; // 0x74
        Boolean Active; // 0x78
        char pad_0x79[0x7];
    }; // 0x80
    static_assert(sizeof(CameraDistanceTresholdEntityData) == 0x80);
}
#pragma pack(pop)