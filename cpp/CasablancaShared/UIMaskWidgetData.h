// Object: UIMaskWidgetData
// ClassId: 3820
// RuntimeId: 47826
// TypeInfo: 0x0000000144D9AB90
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIMaskWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Float32 Threshold; // 0x80
        char pad_0x84[0x4];
        CString MaskTexture; // 0x88
        Boolean InvertTest; // 0x90
        Boolean InvertThreshold; // 0x91
        char pad_0x92[0xE];
    }; // 0xA0
    static_assert(sizeof(UIMaskWidgetData) == 0xA0);
}
#pragma pack(pop)