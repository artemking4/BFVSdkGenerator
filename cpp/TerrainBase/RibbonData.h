// Object: RibbonData
// ClassId: 1660
// RuntimeId: 16712
// TypeInfo: 0x0000000144EAF570
#include "../TerrainBase/VisualVectorShapeData.h"
#include "../TerrainBase/RibbonPointData.h"

#pragma pack(push, 8)
namespace TerrainBase {
    class RibbonData : public TerrainBase::VisualVectorShapeData {
        Array<TerrainBase::RibbonPointData> RibbonPoints; // 0x50
    }; // 0x58
    static_assert(sizeof(RibbonData) == 0x58);
}
#pragma pack(pop)