// Object: QueryEntityFilterTypeData
// ClassId: 3078
// RuntimeId: 45283
// TypeInfo: 0x0000000144DE48F0
#include "../Entity/EntityData.h"
#include "../DiceShooterShared/QueryEntityFilter.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class QueryEntityFilterTypeData : public Entity::EntityData {
        DiceShooterShared::QueryEntityFilter DefaultValue; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(QueryEntityFilterTypeData) == 0x28);
}
#pragma pack(pop)