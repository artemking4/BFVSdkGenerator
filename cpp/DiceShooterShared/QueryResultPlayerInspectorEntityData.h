// Object: QueryResultPlayerInspectorEntityData
// ClassId: 3080
// RuntimeId: 57438
// TypeInfo: 0x0000000144DE7C10
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityResult.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class QueryResultPlayerInspectorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DiceShooterShared::QueryEntityResult Query; // 0x28
    }; // 0x38
    static_assert(sizeof(QueryResultPlayerInspectorEntityData) == 0x38);
}
#pragma pack(pop)