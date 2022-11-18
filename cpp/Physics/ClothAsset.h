// Object: ClothAsset
// ClassId: 215
// RuntimeId: 9794
// TypeInfo: 0x0000000144F0E540
#include "../Core/Asset.h"
#include "../Physics/ClothSectionMapping.h"
#include "../Physics/ClothStatesSetup.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace Physics {
    class ClothAsset : public Core::Asset {
        Array<Physics::ClothSectionMapping> MeshSectionMappings; // 0x20
        ResourceRef HavokClothResource; // 0x28
        Physics::ClothStatesSetup StatesSetup; // 0x30
        Array<Uint32> DisplayBufferIndices; // 0x58
        Array<Uint32> BoneIndexLookup; // 0x60
        Array<Uint32> SimulatedAndParentBonesLookup; // 0x68
        Array<Boolean> UsedBySimulation; // 0x70
    }; // 0x78
    static_assert(sizeof(ClothAsset) == 0x78);
}
#pragma pack(pop)