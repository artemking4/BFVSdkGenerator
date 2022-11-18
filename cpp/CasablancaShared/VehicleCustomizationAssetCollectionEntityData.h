// Object: VehicleCustomizationAssetCollectionEntityData
// ClassId: 3875
// RuntimeId: 39514
// TypeInfo: 0x0000000144D5D5E0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/VehicleCustomizationAssetCollection.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/CustomizationPartUnlockIndexArray.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VehicleCustomizationAssetCollectionEntityData : public Entity::EntityData {
        CasablancaShared::VehicleCustomizationAssetCollection Collection; // 0x20
        Int32 ActiveIndex; // 0x28
        char pad_0x2C[0x4];
        CasablancaShared::CustomizationPartUnlockIndexArray VisualPartUnlockArray; // 0x30
        CasablancaShared::CustomizationPartUnlockIndexArray WeaponPartUnlockArray; // 0x38
    }; // 0x40
    static_assert(sizeof(VehicleCustomizationAssetCollectionEntityData) == 0x40);
}
#pragma pack(pop)