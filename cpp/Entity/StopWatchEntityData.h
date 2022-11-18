// Object: StopWatchEntityData
// ClassId: 3526
// RuntimeId: 14398
// TypeInfo: 0x0000000144EE4550
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Entity/UpdatePass.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class StopWatchEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Entity::UpdatePass UpdatePass; // 0x24
        Float32 Multiplier; // 0x28
        Float32 TriggerOnTime; // 0x2C
    }; // 0x30
    static_assert(sizeof(StopWatchEntityData) == 0x30);
}
#pragma pack(pop)