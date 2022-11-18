// Object: CollisionData
// ClassId: 1415
// RuntimeId: 18043
// TypeInfo: 0x0000000144F450B0
#include "../Core/DataContainer.h"
#include "../SoldierShared/ValueAtX.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class CollisionData : public Core::DataContainer {
        Array<SoldierShared::ValueAtX> DamageOnVelocity; // 0x18
    }; // 0x20
    static_assert(sizeof(CollisionData) == 0x20);
}
#pragma pack(pop)