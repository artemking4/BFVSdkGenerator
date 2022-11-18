// Object: QuerySplitterEntityData
// ClassId: 3082
// RuntimeId: 52334
// TypeInfo: 0x0000000144DE47F0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityResult.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class QuerySplitterEntityData : public Entity::EntityData {
        Int32 OutputCount; // 0x20
        char pad_0x24[0x4];
        DiceShooterShared::QueryEntityResult Input; // 0x28
        Core::Realm Realm; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(QuerySplitterEntityData) == 0x40);
}
#pragma pack(pop)