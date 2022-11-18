// Object: SoldierAutoAimData
// ClassId: 4639
// RuntimeId: 5489
// TypeInfo: 0x0000000144F45330
#include "../Core/DataContainer.h"
#include "../SoldierShared/AutoAimData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierAutoAimData : public Core::DataContainer {
        Array<SoldierShared::AutoAimData> Poses; // 0x18
    }; // 0x20
    static_assert(sizeof(SoldierAutoAimData) == 0x20);
}
#pragma pack(pop)