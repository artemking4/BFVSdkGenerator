// Object: ClothAssetInstance
// ClassId: 323
// RuntimeId: 6955
// TypeInfo: 0x0000000144E21950
#include "../Core/DataContainerPolicyAsset.h"
#include "../Cloth/ClothObjectBlueprint.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Cloth {
    class ClothAssetInstance : public Core::DataContainerPolicyAsset {
        Cloth::ClothObjectBlueprint Cloth; // 0x20
        Boolean WorldCollision; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(ClothAssetInstance) == 0x30);
}
#pragma pack(pop)