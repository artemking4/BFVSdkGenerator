// Object: LootGroupEntityData
// ClassId: 3410
// RuntimeId: 44985
// TypeInfo: 0x0000000144D027A0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class LootGroupEntityData : public Entity::SpatialEntityData {
        Uint32 MaxLootItemCount; // 0x60
        char pad_0x64[0xC];
    }; // 0x70
    static_assert(sizeof(LootGroupEntityData) == 0x70);
}
#pragma pack(pop)