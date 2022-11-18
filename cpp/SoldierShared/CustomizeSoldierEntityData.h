// Object: CustomizeSoldierEntityData
// ClassId: 2567
// RuntimeId: 28731
// TypeInfo: 0x0000000144F427B0
#include "../GameShared/CustomizeBaseEntityData.h"
#include "../Global/Boolean.h"
#include "../SoldierShared/CustomizeSoldierData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class CustomizeSoldierEntityData : public GameShared::CustomizeBaseEntityData {
        SoldierShared::CustomizeSoldierData CustomizeSoldierData; // 0x28
        Boolean AutoPreloadOnCreation; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(CustomizeSoldierEntityData) == 0x38);
}
#pragma pack(pop)