// Object: EventRepeaterEntityData
// ClassId: 2722
// RuntimeId: 20605
// TypeInfo: 0x0000000144D0A8B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EventRepeaterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 EventCount; // 0x24
        Float32 DelayBetweenEvents; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(EventRepeaterEntityData) == 0x30);
}
#pragma pack(pop)