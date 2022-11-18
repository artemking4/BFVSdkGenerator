// Object: CoverScoreModifierEntityData
// ClassId: 2559
// RuntimeId: 27808
// TypeInfo: 0x0000000144C05C60
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverScoreModifierEntityData : public Entity::EntityData {
        Float32 ScoreBuff; // 0x20
        Float32 SphereRadius; // 0x24
    }; // 0x28
    static_assert(sizeof(CoverScoreModifierEntityData) == 0x28);
}
#pragma pack(pop)