// Object: WaterOceanSimulationEntityData
// ClassId: 3908
// RuntimeId: 4400
// TypeInfo: 0x0000000144F72CC0
#include "../Entity/EntityData.h"
#include "../Core/PlatformScalableInt.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/SplineCurve.h"

#pragma pack(push, 16)
namespace WaterInteractSim {
    class WaterOceanSimulationEntityData : public Entity::EntityData {
        Core::PlatformScalableInt Resolution; // 0x20
        char pad_0x44[0xC];
        Core::SplineCurve WindDistribution; // 0x50
        Float32 TileDimension; // 0x130
        Float32 WaveAmplitude; // 0x134
        Float32 WindSpeed; // 0x138
        Float32 WindAngle; // 0x13C
        Float32 LowPassFilter; // 0x140
        Float32 HighPassFilter; // 0x144
        Float32 FoamHalfLife; // 0x148
        Float32 FoamThreshold; // 0x14C
        Float32 FoamMaxValue; // 0x150
        Float32 Choppiness; // 0x154
        Boolean PhysicsSimulationEnabled; // 0x158
        Boolean Enable; // 0x159
        Boolean EnableFoam; // 0x15A
        char pad_0x15B[0x5];
    }; // 0x160
    static_assert(sizeof(WaterOceanSimulationEntityData) == 0x160);
}
#pragma pack(pop)