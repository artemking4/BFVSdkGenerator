// Object: TerrainMeshScatteringType
// ClassId: 5158
// RuntimeId: 24881
// TypeInfo: 0x0000000144EAF9F0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"
#include "../Core/QualityScalableFloat.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace TerrainBase {
    class TerrainMeshScatteringType : public Core::DataContainer {
        Uint32 Identifier; // 0x18
        Core::Vec2 MinScale; // 0x1C
        Core::Vec2 MaxScale; // 0x24
        Float32 ScaleRandomness; // 0x2C
        Core::QualityScalableFloat Density; // 0x30
        Uint32 FirstSpawnLevel; // 0x44
        Float32 WindScale; // 0x48
        Float32 Stiffness; // 0x4C
        Float32 Damping; // 0x50
        Float32 Mass; // 0x54
        Float32 WindWiggle; // 0x58
        Float32 DissolveRangeRatio; // 0x5C
        Boolean UseVertexColorWeights; // 0x60
        char pad_0x61[0x7];
    }; // 0x68
    static_assert(sizeof(TerrainMeshScatteringType) == 0x68);
}
#pragma pack(pop)