// Object: LevelDescriptionOverrideEntityData
// ClassId: 2829
// RuntimeId: 61083
// TypeInfo: 0x0000000144D2A2A0
#include "../Entity/EntityData.h"
#include "../GameShared/LevelDescriptionComponent.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LevelDescriptionOverrideEntityData : public Entity::EntityData {
        Array<GameShared::LevelDescriptionComponent> Components; // 0x20
    }; // 0x28
    static_assert(sizeof(LevelDescriptionOverrideEntityData) == 0x28);
}
#pragma pack(pop)