// Object: RimeStackContainerElementData
// ClassId: 3691
// RuntimeId: 12135
// TypeInfo: 0x0000000144F2A120
#include "../RimeElementsShared/RimeContainerBaseData.h"
#include "../RimeElementsShared/RimeOrientation.h"
#include "../RimeElementsShared/RimeFlowDirection.h"
#include "../RimeElementsShared/RimeStackSizeDistribution.h"
#include "../RimeElementsShared/RimeStackSpaceDistribution.h"
#include "../RimeElementsShared/RimeStackOverflowMode.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace RimeElementsShared {
    class RimeStackContainerElementData : public RimeElementsShared::RimeContainerBaseData {
        RimeElementsShared::RimeOrientation Orientation; // 0x120
        RimeElementsShared::RimeFlowDirection FlowDirection; // 0x124
        RimeElementsShared::RimeStackSizeDistribution SizeDistribution; // 0x128
        RimeElementsShared::RimeStackSpaceDistribution SpaceDistribution; // 0x12C
        RimeElementsShared::RimeStackOverflowMode OverflowMode; // 0x130
        Float32 ItemSpacing; // 0x134
        Float32 WrapSpacing; // 0x138
        char pad_0x13C[0x4];
    }; // 0x140
    static_assert(sizeof(RimeStackContainerElementData) == 0x140);
}
#pragma pack(pop)