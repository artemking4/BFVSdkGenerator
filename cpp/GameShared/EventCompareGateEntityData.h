// Object: EventCompareGateEntityData
// ClassId: 2716
// RuntimeId: 2989
// TypeInfo: 0x0000000144E76F40
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../GameShared/EventCompareGateType.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace GameShared {
    class EventCompareGateEntityData : public Entity::EntityData {
        Int32 Value; // 0x20
        GameShared::EventCompareGateType CompareType; // 0x24
        Core::Realm Realm; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(EventCompareGateEntityData) == 0x30);
}
#pragma pack(pop)