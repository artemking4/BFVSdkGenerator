// Object: SupplyUnitSphereData
// ClassId: 4947
// RuntimeId: 3589
// TypeInfo: 0x0000000144F439B0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SupplyUnitSphereData : public Core::DataContainer {
        Float32 Radius; // 0x18
        Float32 MaxRadius; // 0x1C
        Float32 RadiusChangeTime; // 0x20
        Float32 SupplyIncSpeed; // 0x24
        Float32 InstantRefill; // 0x28
        Float32 SupplyPointsRefillSpeed; // 0x2C
        Float32 SupplyPointsCapacity; // 0x30
        Boolean ForceUseInstantRefill; // 0x34
        Boolean InfiniteCapacity; // 0x35
        char pad_0x36[0x2];
    }; // 0x38
    static_assert(sizeof(SupplyUnitSphereData) == 0x38);
}
#pragma pack(pop)