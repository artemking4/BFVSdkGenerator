// Object: ClientPlayerInputPressEntityData
// ClassId: 2497
// RuntimeId: 36237
// TypeInfo: 0x0000000144E8F160
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class ClientPlayerInputPressEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 EntryInputAction; // 0x24
        Float32 Level; // 0x28
        Float32 PressFor; // 0x2C
    }; // 0x30
    static_assert(sizeof(ClientPlayerInputPressEntityData) == 0x30);
}
#pragma pack(pop)