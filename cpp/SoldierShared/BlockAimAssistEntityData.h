// Object: BlockAimAssistEntityData
// ClassId: 3267
// RuntimeId: 50625
// TypeInfo: 0x0000000144F39390
#include "../Entity/SpatialEntityData.h"
#include "../SoldierShared/BlockAimAssistData.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class BlockAimAssistEntityData : public Entity::SpatialEntityData {
        SoldierShared::BlockAimAssistData BlockData; // 0x60
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(BlockAimAssistEntityData) == 0x70);
}
#pragma pack(pop)