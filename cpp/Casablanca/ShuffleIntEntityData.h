// Object: ShuffleIntEntityData
// ClassId: 3207
// RuntimeId: 22772
// TypeInfo: 0x0000000144C83240
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ShuffleIntEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 In; // 0x24
        Int32 Size; // 0x28
        Int32 Seed; // 0x2C
    }; // 0x30
    static_assert(sizeof(ShuffleIntEntityData) == 0x30);
}
#pragma pack(pop)