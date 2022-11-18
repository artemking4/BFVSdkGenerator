// Object: AeroDynamicPhysicsData
// ClassId: 98
// RuntimeId: 45643
// TypeInfo: 0x0000000144E9B590
#include "../Core/DataContainer.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace GameShared {
    class AeroDynamicPhysicsData : public Core::DataContainer {
        char pad_0x18[0x8];
        Core::Vec3 BodyDrag; // 0x20
        Core::Vec3 BodyDragOffsetYZ; // 0x30
        Core::Vec3 BodyDragOffsetXZ; // 0x40
        Core::Vec3 BodyDragOffsetXY; // 0x50
    }; // 0x60
    static_assert(sizeof(AeroDynamicPhysicsData) == 0x60);
}
#pragma pack(pop)