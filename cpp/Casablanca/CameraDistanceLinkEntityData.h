// Object: CameraDistanceLinkEntityData
// ClassId: 2448
// RuntimeId: 10676
// TypeInfo: 0x0000000144C32970
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CameraDistanceLinkEntityData : public Entity::EntityData {
        Int32 FramesPerTick; // 0x20
        Float32 DistanceTreshold; // 0x24
        Boolean Active; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(CameraDistanceLinkEntityData) == 0x30);
}
#pragma pack(pop)