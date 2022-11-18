// Object: BFUIMinimapProjectionWidgetData
// ClassId: 3800
// RuntimeId: 14385
// TypeInfo: 0x0000000144D96F10
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../CasablancaShared/BFUIMinimapWorldViewAsset.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIMinimapProjectionWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Core::LinearTransform WorldTransform; // 0x80
        CasablancaShared::BFUIMinimapWorldViewAsset MinimapWorldViewAsset; // 0xC0
        Float32 AreaRadius; // 0xC8
        Boolean UseLink; // 0xCC
        Boolean ClipToEdge; // 0xCD
        char pad_0xCE[0x2];
    }; // 0xD0
    static_assert(sizeof(BFUIMinimapProjectionWidgetData) == 0xD0);
}
#pragma pack(pop)