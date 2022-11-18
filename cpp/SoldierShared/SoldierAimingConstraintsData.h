// Object: SoldierAimingConstraintsData
// ClassId: 4638
// RuntimeId: 9422
// TypeInfo: 0x0000000144F453B0
#include "../Core/DataContainer.h"
#include "../GameShared/AimingConstraintsData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierAimingConstraintsData : public Core::DataContainer {
        GameShared::AimingConstraintsData SwimmingConstraints; // 0x18
    }; // 0x28
    static_assert(sizeof(SoldierAimingConstraintsData) == 0x28);
}
#pragma pack(pop)