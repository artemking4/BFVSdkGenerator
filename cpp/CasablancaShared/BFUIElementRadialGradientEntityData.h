// Object: BFUIElementRadialGradientEntityData
// ClassId: 3663
// RuntimeId: 50033
// TypeInfo: 0x0000000144D9C810
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIBlendMode.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementRadialGradientEntityData : public CasablancaShared::BFUIElementEntityData {
        Core::Vec3 InnerColor; // 0x130
        Core::Vec3 OuterColor; // 0x140
        Float32 InnerAlpha; // 0x150
        Float32 OuterAlpha; // 0x154
        GameShared::UIBlendMode BlendMode; // 0x158
        Float32 AntiAliasingWidth; // 0x15C
        Float32 InnerRadius; // 0x160
        Float32 OuterRadius; // 0x164
        Float32 InnerRadiusOffset; // 0x168
        Float32 OuterRadiusOffset; // 0x16C
        Float32 StartAngle; // 0x170
        Float32 StopAngle; // 0x174
        Boolean UseColorAsOverlay; // 0x178
        Boolean OverrideBlendMode; // 0x179
        Boolean UseElementRelativeRadii; // 0x17A
        char pad_0x17B[0x5];
    }; // 0x180
    static_assert(sizeof(BFUIElementRadialGradientEntityData) == 0x180);
}
#pragma pack(pop)