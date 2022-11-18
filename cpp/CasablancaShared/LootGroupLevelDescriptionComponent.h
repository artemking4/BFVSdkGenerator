// Object: LootGroupLevelDescriptionComponent
// ClassId: 4215
// RuntimeId: 2549
// TypeInfo: 0x0000000144D02820
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Entity/ObjectBlueprint.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LootGroupLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        Entity::ObjectBlueprint LootGroup; // 0x18
    }; // 0x20
    static_assert(sizeof(LootGroupLevelDescriptionComponent) == 0x20);
}
#pragma pack(pop)