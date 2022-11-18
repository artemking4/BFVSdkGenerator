// Object: ActionMessageQueueEntityData
// ClassId: 2023
// RuntimeId: 20450
// TypeInfo: 0x0000000144D6D030
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ActionMessageQueueEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 MessagePriority; // 0x24
        Boolean AutoProcessQueue; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(ActionMessageQueueEntityData) == 0x30);
}
#pragma pack(pop)