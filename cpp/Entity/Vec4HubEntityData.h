// Object: Vec4HubEntityData
// ClassId: 3865
// RuntimeId: 15814
// TypeInfo: 0x0000000144EE4FD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Entity {
    class Vec4HubEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 InputCount; // 0x24
        Int32 InputSelect; // 0x28
        char pad_0x2C[0x4];
        Array<Uint32> HashedInput; // 0x30
    }; // 0x38
    static_assert(sizeof(Vec4HubEntityData) == 0x38);
}
#pragma pack(pop)