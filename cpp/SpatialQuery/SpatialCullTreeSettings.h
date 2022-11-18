// Object: SpatialCullTreeSettings
// ClassId: 4894
// RuntimeId: 27783
// TypeInfo: 0x0000000144F52590
#include "../SpatialQuery/SpatialCullTreeSettingsConst.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SpatialQuery {
    class SpatialCullTreeSettings : public SpatialQuery::SpatialCullTreeSettingsConst {
        Int32 OverridePrecomputedExtrusionLengthIndex; // 0x40
        char pad_0x44[0x4];
        CString DrawTreeFilter; // 0x48
        Int32 DrawTreeGridIndex; // 0x50
        Int32 DrawTreeDepthMin; // 0x54
        Int32 DrawTreeDepthMax; // 0x58
        Float32 DrawHighlightBoundingBoxAreaMax; // 0x5C
        Float32 DrawHighlightCullAreaMax; // 0x60
        Boolean DrawTree; // 0x64
        Boolean DrawTreeContents; // 0x65
        Boolean DrawTreeNodes; // 0x66
        Boolean DrawAllNames; // 0x67
        Boolean DrawTreeContentsPositions; // 0x68
        Boolean DrawTreeContentsCompressed; // 0x69
        Boolean DrawPrecomputedExtrusionLengths; // 0x6A
        Boolean DrawHighlightMissingExtrusionLengths; // 0x6B
        Boolean DrawHighlightPrecomputeOcclusion; // 0x6C
        Boolean ForceRecompressEntities; // 0x6D
        char pad_0x6E[0x2];
    }; // 0x70
    static_assert(sizeof(SpatialCullTreeSettings) == 0x70);
}
#pragma pack(pop)