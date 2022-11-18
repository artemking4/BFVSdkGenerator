// Object: BFUIElementCompassMarkersEntityData
// ClassId: 3649
// RuntimeId: 37476
// TypeInfo: 0x0000000144D2FBA0
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../GameShared/UIBlendMode.h"
#include "../CasablancaShared/BFUILegacyElementFillData.h"
#include "../Core/Vec2.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementCompassMarkersEntityData : public CasablancaShared::BFUIElementEntityData {
        GameShared::UIBlendMode BlendMode; // 0x130
        char pad_0x134[0x4];
        CasablancaShared::BFUILegacyElementFillData TickFill; // 0x138
        Core::Vec2 TickSize; // 0x140
        Core::Vec2 TickOffset; // 0x148
        Core::Vec2 TextOffset; // 0x150
        Core::Vec2 TextSize; // 0x158
        GameShared::UIElementFontStyle FontDirections; // 0x160
        Int32 AngleInterval; // 0x168
        Float32 AngleOffset; // 0x16C
        Array<CString> DirectionsSIDs; // 0x170
        Float32 Angle; // 0x178
        Float32 ProportionVisible; // 0x17C
        Boolean DrawDirections; // 0x180
        Boolean DrawNumbers; // 0x181
        Boolean DrawTicks; // 0x182
        char pad_0x183[0xD];
    }; // 0x190
    static_assert(sizeof(BFUIElementCompassMarkersEntityData) == 0x190);
}
#pragma pack(pop)