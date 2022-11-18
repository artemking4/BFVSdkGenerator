// Object: AdvancedRandomIntEntityData
// ClassId: 2027
// RuntimeId: 31723
// TypeInfo: 0x0000000144EE5850
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class AdvancedRandomIntEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 Start; // 0x24
        Int32 Count; // 0x28
        Boolean AllowRepeatingValues; // 0x2C
        Boolean DiscardOutputtedValues; // 0x2D
        Boolean ResetListWhenDepleted; // 0x2E
        char pad_0x2F[0x1];
    }; // 0x30
    static_assert(sizeof(AdvancedRandomIntEntityData) == 0x30);
}
#pragma pack(pop)