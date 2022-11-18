// Object: SoldierFOVEffect
// ClassId: 4641
// RuntimeId: 29178
// TypeInfo: 0x0000000144F45230
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierFOVEffect : public Core::DataContainer {
        Float32 Fov; // 0x18
        Float32 FovInDelay; // 0x1C
        Float32 FovInTime; // 0x20
        Float32 FovOutDelay; // 0x24
        Float32 FovOutTime; // 0x28
        Boolean FovIsOffset; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(SoldierFOVEffect) == 0x30);
}
#pragma pack(pop)