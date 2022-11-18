// Object: TerrainQuadDecalAtlasTileTemplateData
// ClassId: 799
// RuntimeId: 65184
// TypeInfo: 0x0000000144EAF2F0
#include "../Core/Asset.h"
#include "../TerrainBase/TerrainQuadDecalAtlasTile.h"

#pragma pack(push, 8)
namespace TerrainBase {
    class TerrainQuadDecalAtlasTileTemplateData : public Core::Asset {
        TerrainBase::TerrainQuadDecalAtlasTile AtlasTile; // 0x20
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(TerrainQuadDecalAtlasTileTemplateData) == 0x38);
}
#pragma pack(pop)