// Object: RandomActionSelectorEntityData
// ClassId: 3090
// RuntimeId: 854
// TypeInfo: 0x0000000144DBEDB0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class RandomActionSelectorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean SelectActionsDeterministically; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(RandomActionSelectorEntityData) == 0x28);
}
#pragma pack(pop)