// Object: VehicleCustomizationAsset
// ClassId: 331
// RuntimeId: 28653
// TypeInfo: 0x0000000144E813C0
#include "../GameShared/CustomizationAsset.h"
#include "../GameShared/CustomizationTable.h"

#pragma pack(push, 8)
namespace GameShared {
    class VehicleCustomizationAsset : public GameShared::CustomizationAsset {
        GameShared::CustomizationTable Customization; // 0x28
    }; // 0x30
    static_assert(sizeof(VehicleCustomizationAsset) == 0x30);
}
#pragma pack(pop)