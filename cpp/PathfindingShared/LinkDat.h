// Object: LinkDat
// ClassId: 4228
// RuntimeId: 55399
// TypeInfo: 0x0000000144EAC100
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../PathfindingShared/NavLinkType.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../PathfindingShared/CustomPathLinkData.h"
#include "../PathfindingShared/LinkFlowTune.h"

#pragma pack(push, 8)
namespace PathfindingShared {
    class LinkDat : public Core::DataContainer {
        Uint32 LayerMask; // 0x18
        PathfindingShared::NavLinkType LinkType; // 0x1C
        Uint32 ForwardLinkUsageFlags; // 0x20
        Uint32 BackwardLinkUsageFlags; // 0x24
        Float32 PenaltyMult; // 0x28
        Float32 MaxSnapDist; // 0x2C
        Float32 MayUseDist; // 0x30
        Float32 MustUseDist; // 0x34
        PathfindingShared::CustomPathLinkData UserData; // 0x38
        PathfindingShared::LinkFlowTune LinkFlowTune; // 0x40
        Boolean StopToUseLink; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(LinkDat) == 0x50);
}
#pragma pack(pop)