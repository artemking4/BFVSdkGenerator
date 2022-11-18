// Object: UICompassTickAppearanceInfo
// ClassId: 5379
// RuntimeId: 26131
// TypeInfo: 0x0000000144D9B890
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/UICompassTickType.h"
#include "../Core/Vec4.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIBlendMode.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UICompassTickAppearanceInfo : public Core::DataContainer {
        Float32 TickHeight; // 0x18
        Float32 TickWidth; // 0x1C
        Core::Vec4 TickColor; // 0x20
        CasablancaShared::UICompassTickType TickType; // 0x30
        Float32 TickAlpha; // 0x34
        GameShared::UIBlendMode BlendMode; // 0x38
        Boolean OverrideBlendMode; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(UICompassTickAppearanceInfo) == 0x40);
}
#pragma pack(pop)