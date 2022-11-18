// Object: QueryCacheEntityData
// ClassId: 3077
// RuntimeId: 56386
// TypeInfo: 0x0000000144DE4970
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../DiceShooterShared/QueryCacheEntityInputData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class QueryCacheEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DiceShooterShared::QueryEntityResult Input; // 0x28
        DiceShooterShared::QueryCacheEntityInputData InputData; // 0x38
        Boolean AlwaysEnabled; // 0x39
        Boolean KeepRemoved; // 0x3A
        Boolean SendOutputOnReceiveInput; // 0x3B
        Boolean OnlySendOutputIfInputHasChanged; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(QueryCacheEntityData) == 0x40);
}
#pragma pack(pop)