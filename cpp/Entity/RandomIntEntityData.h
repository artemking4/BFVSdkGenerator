// Object: RandomIntEntityData
// ClassId: 3094
// RuntimeId: 56483
// TypeInfo: 0x0000000144EE58D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class RandomIntEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 Start; // 0x24
        Int32 Count; // 0x28
        Boolean TrueRandom; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(RandomIntEntityData) == 0x30);
}
#pragma pack(pop)