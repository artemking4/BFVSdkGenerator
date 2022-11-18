// Object: BlockVisibilityComponentData
// ClassId: 1724
// RuntimeId: 53515
// TypeInfo: 0x0000000144C7D280
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class BlockVisibilityComponentData : public Entity::GameComponentData {
        Float32 BlockingRadius; // 0x80
        Float32 InitialDelay; // 0x84
        Float32 TimeToLive; // 0x88
        char pad_0x8C[0x4];
    }; // 0x90
    static_assert(sizeof(BlockVisibilityComponentData) == 0x90);
}
#pragma pack(pop)