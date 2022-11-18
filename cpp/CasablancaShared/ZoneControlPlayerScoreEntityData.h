// Object: ZoneControlPlayerScoreEntityData
// ClassId: 3930
// RuntimeId: 28625
// TypeInfo: 0x0000000144D5C0E0
#include "../Entity/EntityData.h"
#include "../DiceShooterShared/QueryEntityResult.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ZoneControlPlayerScoreEntityData : public Entity::EntityData {
        DiceShooterShared::QueryEntityResult PlayerList; // 0x20
    }; // 0x30
    static_assert(sizeof(ZoneControlPlayerScoreEntityData) == 0x30);
}
#pragma pack(pop)