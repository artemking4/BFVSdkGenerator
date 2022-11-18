// Object: SpatialCullTreeSettingsConst
// ClassId: 4893
// RuntimeId: 18900
// TypeInfo: 0x0000000144F52610
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SpatialQuery {
    class SpatialCullTreeSettingsConst : public Core::DataContainer {
        Float32 MinCullArea; // 0x18
        Float32 MaxCullArea; // 0x1C
        Float32 CullAreaScale; // 0x20
        Float32 RootSize; // 0x24
        Uint32 MaxTreeDepth; // 0x28
        Uint32 MinNodeSplitCount; // 0x2C
        Uint32 MaxNodeMergeCount; // 0x30
        Uint32 CullDistanceMethod; // 0x34
        Float32 MissingExtrusionLength; // 0x38
        Boolean PrecomputedExtrusionEnabled; // 0x3C
        Boolean PrecomputedOcclusionEnabled; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(SpatialCullTreeSettingsConst) == 0x40);
}
#pragma pack(pop)