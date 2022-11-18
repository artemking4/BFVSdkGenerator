// Object: UIWorldIconProjectionWidgetData
// ClassId: 3849
// RuntimeId: 13368
// TypeInfo: 0x0000000144D40F50
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"
#include "../Core/Vec2.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIWorldIconProjectionWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Core::LinearTransform WorldTransform; // 0x80
        Core::Vec3 IconWorldOffset; // 0xC0
        Float32 TransformMix; // 0xD0
        Core::Vec2 ClipOffset; // 0xD4
        Float32 SreenSpaceLookAtPercentage; // 0xDC
        Float32 RaycastOcclusionHitRadius; // 0xE0
        Boolean ClipToEdge; // 0xE4
        Boolean UseLink; // 0xE5
        Boolean UseVolumeOcclusion; // 0xE6
        Boolean UseSpectatorOverviewClipMargins; // 0xE7
        Boolean SpectatorOverviewBorderBarClipMargins; // 0xE8
        Boolean UseRaycastOcclusion; // 0xE9
        char pad_0xEA[0x6];
    }; // 0xF0
    static_assert(sizeof(UIWorldIconProjectionWidgetData) == 0xF0);
}
#pragma pack(pop)