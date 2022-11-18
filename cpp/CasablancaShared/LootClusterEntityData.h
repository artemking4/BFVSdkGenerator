// Object: LootClusterEntityData
// ClassId: 3409
// RuntimeId: 43413
// TypeInfo: 0x0000000144D02120
#include "../Entity/SpatialEntityData.h"
#include "../CasablancaShared/LootClusterList.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class LootClusterEntityData : public Entity::SpatialEntityData {
        Array<CasablancaShared::LootClusterList> PossibleClusterList; // 0x60
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(LootClusterEntityData) == 0x70);
}
#pragma pack(pop)