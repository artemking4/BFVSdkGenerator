// Object: BFUIMinimapPlayerRotationWidgetData
// ClassId: 3799
// RuntimeId: 3992
// TypeInfo: 0x0000000144D96E90
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../CasablancaShared/BFUIMinimapWorldViewAsset.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIMinimapPlayerRotationWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Core::LinearTransform WorldTransform; // 0x80
        CasablancaShared::BFUIMinimapWorldViewAsset MinimapWorldViewAsset; // 0xC0
        char pad_0xC8[0x8];
    }; // 0xD0
    static_assert(sizeof(BFUIMinimapPlayerRotationWidgetData) == 0xD0);
}
#pragma pack(pop)