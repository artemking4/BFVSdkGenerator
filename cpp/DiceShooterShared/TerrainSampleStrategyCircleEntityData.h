// Object: TerrainSampleStrategyCircleEntityData
// ClassId: 3568
// RuntimeId: 46213
// TypeInfo: 0x0000000144DF9640
#include "../DiceShooterShared/TerrainSampleStrategyData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class TerrainSampleStrategyCircleEntityData : public DiceShooterShared::TerrainSampleStrategyData {
        Float32 Radius; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(TerrainSampleStrategyCircleEntityData) == 0x30);
}
#pragma pack(pop)