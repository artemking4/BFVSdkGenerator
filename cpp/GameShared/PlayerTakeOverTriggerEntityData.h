// Object: PlayerTakeOverTriggerEntityData
// ClassId: 3436
// RuntimeId: 1110
// TypeInfo: 0x0000000144E8EA60
#include "../Entity/SpatialEntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class PlayerTakeOverTriggerEntityData : public Entity::SpatialEntityData {
        GameShared::TeamId TeamId; // 0x60
        Float32 TimeToLoseControl; // 0x64
        char pad_0x68[0x8];
    }; // 0x70
    static_assert(sizeof(PlayerTakeOverTriggerEntityData) == 0x70);
}
#pragma pack(pop)