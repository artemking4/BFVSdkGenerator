// Object: CameraEnterAreaTriggerEntityData
// ClassId: 2450
// RuntimeId: 21479
// TypeInfo: 0x0000000144E8E960
#include "../Entity/EntityData.h"
#include "../Core/LocalPlayerId.h"
#include "../Global/Boolean.h"
#include "../Entity/UpdatePass.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraEnterAreaTriggerEntityData : public Entity::EntityData {
        Core::LocalPlayerId LocalPlayerId; // 0x20
        Entity::UpdatePass UpdatePass; // 0x24
        Float32 TimeTreshold; // 0x28
        Boolean TriggerForAllPlayers; // 0x2C
        Boolean AutoStart; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(CameraEnterAreaTriggerEntityData) == 0x30);
}
#pragma pack(pop)