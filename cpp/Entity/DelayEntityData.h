// Object: DelayEntityData
// ClassId: 2617
// RuntimeId: 23015
// TypeInfo: 0x0000000144EE5550
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Entity/TimeDeltaType.h"

#pragma pack(push, 8)
namespace Entity {
    class DelayEntityData : public Entity::EntityData {
        Float32 Delay; // 0x20
        Core::Realm Realm; // 0x24
        Entity::TimeDeltaType TimeDeltaType; // 0x28
        Boolean AutoStart; // 0x2C
        Boolean RunOnce; // 0x2D
        Boolean RemoveDuplicateEvents; // 0x2E
        char pad_0x2F[0x1];
    }; // 0x30
    static_assert(sizeof(DelayEntityData) == 0x30);
}
#pragma pack(pop)