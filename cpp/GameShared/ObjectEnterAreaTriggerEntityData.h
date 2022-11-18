// Object: ObjectEnterAreaTriggerEntityData
// ClassId: 2911
// RuntimeId: 36685
// TypeInfo: 0x0000000144E8E9E0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Realm.h"
#include "../Entity/UpdatePass.h"

#pragma pack(push, 8)
namespace GameShared {
    class ObjectEnterAreaTriggerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Entity::UpdatePass UpdatePass; // 0x24
        Boolean AutoStart; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(ObjectEnterAreaTriggerEntityData) == 0x30);
}
#pragma pack(pop)