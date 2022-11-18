// Object: BFUIPersistentStatsObject
// ClassId: 1233
// RuntimeId: 28397
// TypeInfo: 0x0000000144D5FB60
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPersistentStatsObject : public Core::DataContainer {
        Int32 KillerKillsCount; // 0x18
        Int32 KillerDeathsCount; // 0x1C
        Int32 KillerWeaponRank; // 0x20
        Int32 KillerClassRank; // 0x24
        Int32 KillerVehicleRank; // 0x28
        Boolean KillerHasWeaponRank; // 0x2C
        Boolean KillerHasClassRank; // 0x2D
        Boolean KillerHasVehicleRank; // 0x2E
        char pad_0x2F[0x1];
    }; // 0x30
    static_assert(sizeof(BFUIPersistentStatsObject) == 0x30);
}
#pragma pack(pop)