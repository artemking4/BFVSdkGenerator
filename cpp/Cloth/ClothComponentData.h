// Object: ClothComponentData
// ClassId: 1690
// RuntimeId: 32702
// TypeInfo: 0x0000000144E218D0
#include "../Entity/ComponentData.h"
#include "../Cloth/ClothAssetInstance.h"

#pragma pack(push, 16)
namespace Cloth {
    class ClothComponentData : public Entity::ComponentData {
        Array<Cloth::ClothAssetInstance> Instances; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(ClothComponentData) == 0x90);
}
#pragma pack(pop)