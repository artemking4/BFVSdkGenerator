// Object: ProximityTrackerData
// ClassId: 4552
// RuntimeId: 14615
// TypeInfo: 0x0000000144F0F080
#include "../Core/DataContainer.h"
#include "../Core/Vec3.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace Physics {
    class ProximityTrackerData : public Core::DataContainer {
        Uint32 CollisionLayer; // 0x18
        char pad_0x1C[0x4];
        Core::Vec3 HalfExtents; // 0x20
    }; // 0x30
    static_assert(sizeof(ProximityTrackerData) == 0x30);
}
#pragma pack(pop)