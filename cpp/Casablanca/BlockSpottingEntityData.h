// Object: BlockSpottingEntityData
// ClassId: 3268
// RuntimeId: 55692
// TypeInfo: 0x0000000144C31FF0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class BlockSpottingEntityData : public Entity::SpatialEntityData {
        Float32 Radius; // 0x60
        GameShared::TeamId TeamToUnspot; // 0x64
        Float32 ActiveDuration; // 0x68
        Float32 InitialDelay; // 0x6C
        Float32 UnspotTime; // 0x70
        Boolean ActivateOnSpawn; // 0x74
        Boolean UnspotControllables; // 0x75
        char pad_0x76[0xA];
    }; // 0x80
    static_assert(sizeof(BlockSpottingEntityData) == 0x80);
}
#pragma pack(pop)