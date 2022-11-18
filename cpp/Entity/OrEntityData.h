// Object: OrEntityData
// ClassId: 2923
// RuntimeId: 29270
// TypeInfo: 0x0000000144EE5D50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class OrEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 InputCount; // 0x24
        Boolean AlwaysWriteOut; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(OrEntityData) == 0x30);
}
#pragma pack(pop)