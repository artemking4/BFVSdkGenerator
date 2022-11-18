// Object: RandomEventEntityData
// ClassId: 3092
// RuntimeId: 5300
// TypeInfo: 0x0000000144EE5A50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class RandomEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 Probability; // 0x24
        Boolean RandomizeFirstOnly; // 0x28
        Boolean AutoStart; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(RandomEventEntityData) == 0x30);
}
#pragma pack(pop)