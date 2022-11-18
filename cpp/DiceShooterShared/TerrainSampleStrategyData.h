// Object: TerrainSampleStrategyData
// ClassId: 3567
// RuntimeId: 11695
// TypeInfo: 0x0000000144DF9740
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

namespace DiceShooterShared {
    class TerrainSampleStrategyData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 SampleCount; // 0x24
    }; // 0x28
    static_assert(sizeof(TerrainSampleStrategyData) == 0x28);
}