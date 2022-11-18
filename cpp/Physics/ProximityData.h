// Object: ProximityData
// ClassId: 4550
// RuntimeId: 6663
// TypeInfo: 0x0000000144F0FC80
#include "../Core/DataContainer.h"
#include "../Physics/ProximityObjectType.h"

#pragma pack(push, 8)
namespace Physics {
    class ProximityData : public Core::DataContainer {
        Physics::ProximityObjectType ProximityType; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(ProximityData) == 0x20);
}
#pragma pack(pop)