// Object: BlockSpottingComponentData
// ClassId: 1723
// RuntimeId: 5318
// TypeInfo: 0x0000000144C7D300
#include "../Entity/GameComponentData.h"
#include "../Casablanca/BlockSpottingEntityData.h"
#include "../Global/Float32.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 16)
namespace Casablanca {
    class BlockSpottingComponentData : public Entity::GameComponentData {
        Casablanca::BlockSpottingEntityData BlockSpottingEntity; // 0x80
        Float32 Radius; // 0x88
        GameShared::TeamId TeamToUnspot; // 0x8C
    }; // 0x90
    static_assert(sizeof(BlockSpottingComponentData) == 0x90);
}
#pragma pack(pop)