// Object: VehicleCustomizationAssetCollection
// ClassId: 457
// RuntimeId: 37401
// TypeInfo: 0x0000000144D5D660
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/VeniceVehicleCustomizationAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VehicleCustomizationAssetCollection : public Core::DataContainerPolicyAsset {
        Array<CasablancaShared::VeniceVehicleCustomizationAsset> VehicleCustomizationAssets; // 0x20
    }; // 0x28
    static_assert(sizeof(VehicleCustomizationAssetCollection) == 0x28);
}
#pragma pack(pop)