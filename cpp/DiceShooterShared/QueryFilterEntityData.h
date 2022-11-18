// Object: QueryFilterEntityData
// ClassId: 3079
// RuntimeId: 13802
// TypeInfo: 0x0000000144DE4870
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../DiceShooterShared/QueryFilterEntityInputData.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../GameShared/TeamId.h"
#include "../GameShared/SquadId.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class QueryFilterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        DiceShooterShared::QueryFilterEntityInputData InputData; // 0x30
        Core::LinearTransform StartTransform; // 0x80
        Core::Vec3 StartPositionOffset; // 0xC0
        DiceShooterShared::QueryEntityResult Input; // 0xD0
        Float32 Latency; // 0xE0
        GameShared::TeamId TeamId; // 0xE4
        GameShared::SquadId SquadId; // 0xE8
        Boolean UseTransformFromOwnControllable; // 0xEC
        Boolean UseAimTransformFromOwnControllable; // 0xED
        char pad_0xEE[0x2];
    }; // 0xF0
    static_assert(sizeof(QueryFilterEntityData) == 0xF0);
}
#pragma pack(pop)