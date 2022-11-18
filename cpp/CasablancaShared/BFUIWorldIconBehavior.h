// Object: BFUIWorldIconBehavior
// ClassId: 901
// RuntimeId: 15417
// TypeInfo: 0x0000000144D3EDE0
#include "../GameShared/UIWorldIconBehavior.h"
#include "../CasablancaShared/UIWorldIconFadeConfiguration.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIWorldZoneDistanceConfiguration.h"
#include "../CasablancaShared/UIWorldZoneType.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWorldIconBehavior : public GameShared::UIWorldIconBehavior {
        CasablancaShared::UIWorldIconFadeConfiguration ForegroundFadeConfig; // 0x20
        CasablancaShared::UIWorldIconFadeConfiguration BackgroundFadeConfig; // 0x58
        CasablancaShared::UIWorldIconFadeConfiguration LabelFadeConfig; // 0x90
        CasablancaShared::UIWorldIconFadeConfiguration DistanceFadeConfig; // 0xC8
        CasablancaShared::UIWorldZoneDistanceConfiguration CustomZoneDistanceConfig; // 0x100
        CasablancaShared::UIWorldZoneType ScaleZone; // 0x108
        Float32 LowestScale; // 0x10C
        Float32 ScaleDistance; // 0x110
        Float32 IconTextScale; // 0x114
        Boolean VisibleOnMinimap; // 0x118
        Boolean MagneticToMinimap; // 0x119
        Boolean VisibleOnScreen; // 0x11A
        Boolean MagneticToScreen; // 0x11B
        Boolean VisibleBehind; // 0x11C
        Boolean VisibleOnDeploy; // 0x11D
        Boolean ScaleOrderIcon; // 0x11E
        Boolean UseCustomZoneDistance; // 0x11F
    }; // 0x120
    static_assert(sizeof(BFUIWorldIconBehavior) == 0x120);
}
#pragma pack(pop)