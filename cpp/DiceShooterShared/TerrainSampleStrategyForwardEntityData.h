// Object: TerrainSampleStrategyForwardEntityData
// ClassId: 3569
// RuntimeId: 19945
// TypeInfo: 0x0000000144DF96C0
#include "../DiceShooterShared/TerrainSampleStrategyData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class TerrainSampleStrategyForwardEntityData : public DiceShooterShared::TerrainSampleStrategyData {
        Float32 InitialStepSize; // 0x28
        Float32 StepSize; // 0x2C
        Core::Vec3 Direction; // 0x30
    }; // 0x40
    static_assert(sizeof(TerrainSampleStrategyForwardEntityData) == 0x40);
}
#pragma pack(pop)