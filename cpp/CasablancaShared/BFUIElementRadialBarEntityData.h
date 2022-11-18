// Object: BFUIElementRadialBarEntityData
// ClassId: 3662
// RuntimeId: 38270
// TypeInfo: 0x0000000144D9C790
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIBlendMode.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementRadialBarEntityData : public CasablancaShared::BFUIElementEntityData {
        Core::Vec3 BaseColor; // 0x130
        GameShared::UIBlendMode BlendMode; // 0x140
        Float32 BarWidth; // 0x144
        Float32 BarRadius; // 0x148
        Float32 StartAngle; // 0x14C
        Float32 EndAngle; // 0x150
        Float32 ExtraGeometry; // 0x154
        Float32 RampWidth; // 0x158
        Int32 ZOrder; // 0x15C
        Boolean UseColorAsOverlay; // 0x160
        Boolean OverrideBlendMode; // 0x161
        char pad_0x162[0xE];
    }; // 0x170
    static_assert(sizeof(BFUIElementRadialBarEntityData) == 0x170);
}
#pragma pack(pop)