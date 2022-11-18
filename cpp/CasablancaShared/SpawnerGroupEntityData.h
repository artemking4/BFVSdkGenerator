// Object: SpawnerGroupEntityData
// ClassId: 3489
// RuntimeId: 58585
// TypeInfo: 0x0000000144D35A30
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpawnerGroupEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        Boolean Enabled; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(SpawnerGroupEntityData) == 0x28);
}
#pragma pack(pop)