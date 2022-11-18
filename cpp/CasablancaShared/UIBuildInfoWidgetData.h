// Object: UIBuildInfoWidgetData
// ClassId: 3809
// RuntimeId: 13545
// TypeInfo: 0x0000000144D9B990
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIBuildInfoWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Float32 RandomizeLocationInterval; // 0x80
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(UIBuildInfoWidgetData) == 0x90);
}
#pragma pack(pop)