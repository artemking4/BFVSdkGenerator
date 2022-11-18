// Object: QueryResultToPlayerEventEntityData
// ClassId: 3081
// RuntimeId: 14167
// TypeInfo: 0x0000000144D12400
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class QueryResultToPlayerEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DiceShooterShared::QueryEntityResult Input; // 0x28
        Int32 StartIndex; // 0x38
        Int32 EndIndex; // 0x3C
        Boolean SendPlayerEventsOnPropertyChange; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(QueryResultToPlayerEventEntityData) == 0x48);
}
#pragma pack(pop)