// Object: AIShieldedEntryFixEntityData
// ClassId: 2015
// RuntimeId: 52115
// TypeInfo: 0x0000000144D6CD30
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AIShieldedEntryFixEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AIShieldedEntryFixEntityData) == 0x28);
}
#pragma pack(pop)