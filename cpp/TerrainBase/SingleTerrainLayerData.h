// Object: SingleTerrainLayerData
// ClassId: 5157
// RuntimeId: 43144
// TypeInfo: 0x0000000144EAF8F0
#include "../TerrainBase/TerrainLayerData.h"
#include "../TerrainBase/TerrainMeshScatteringType.h"

#pragma pack(push, 8)
namespace TerrainBase {
    class SingleTerrainLayerData : public TerrainBase::TerrainLayerData {
        Array<TerrainBase::TerrainMeshScatteringType> MeshScatteringTypes; // 0x18
    }; // 0x20
    static_assert(sizeof(SingleTerrainLayerData) == 0x20);
}
#pragma pack(pop)