// Object: BlockAimAssistComponentData
// ClassId: 1722
// RuntimeId: 46013
// TypeInfo: 0x0000000144F39710
#include "../Entity/GameComponentData.h"
#include "../SoldierShared/BlockAimAssistData.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class BlockAimAssistComponentData : public Entity::GameComponentData {
        SoldierShared::BlockAimAssistData BlockData; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(BlockAimAssistComponentData) == 0x90);
}
#pragma pack(pop)