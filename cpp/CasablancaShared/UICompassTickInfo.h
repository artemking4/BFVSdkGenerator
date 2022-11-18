// Object: UICompassTickInfo
// ClassId: 5380
// RuntimeId: 62709
// TypeInfo: 0x0000000144D9B810
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/UICompassTickAppearanceInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UICompassTickInfo : public Core::DataContainer {
        Float32 Angle; // 0x18
        char pad_0x1C[0x4];
        CasablancaShared::UICompassTickAppearanceInfo TickAppearance; // 0x20
    }; // 0x28
    static_assert(sizeof(UICompassTickInfo) == 0x28);
}
#pragma pack(pop)