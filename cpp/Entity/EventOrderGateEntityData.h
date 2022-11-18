// Object: EventOrderGateEntityData
// ClassId: 2720
// RuntimeId: 18236
// TypeInfo: 0x0000000144EE55D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Entity {
    class EventOrderGateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 EventCount; // 0x24
        Array<Uint32> EventCountdowns; // 0x28
        Array<Int32> SourceHashes; // 0x30
        Boolean Enabled; // 0x38
        Boolean DisableOnOpen; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(EventOrderGateEntityData) == 0x40);
}
#pragma pack(pop)