// Object: RandomFloatEntityData
// ClassId: 3093
// RuntimeId: 3396
// TypeInfo: 0x0000000144EE5950
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class RandomFloatEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 Min; // 0x24
        Float32 Max; // 0x28
        Boolean TrueRandom; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(RandomFloatEntityData) == 0x30);
}
#pragma pack(pop)