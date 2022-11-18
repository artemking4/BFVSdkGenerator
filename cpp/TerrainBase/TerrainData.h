// Object: TerrainData
// ClassId: 796
// RuntimeId: 41885
// TypeInfo: 0x0000000144EAF870
#include "../Core/Asset.h"
#include "../TerrainBase/TerrainLayerData.h"
#include "../Global/Boolean.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace TerrainBase {
    class TerrainData : public Core::Asset {
        Array<TerrainBase::TerrainLayerData> TerrainLayers; // 0x20
        ResourceRef TerrainStreamingTreeResource; // 0x28
        ResourceRef VisualResource; // 0x30
        ResourceRef TerrainLayerCombinationsResource; // 0x38
        Boolean DynamicMaskEnable; // 0x40
        Boolean CastShadowsEnable; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(TerrainData) == 0x48);
}
#pragma pack(pop)