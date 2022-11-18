// Object: BFUILinkableStateNodeEntityData
// ClassId: 3523
// RuntimeId: 32740
// TypeInfo: 0x0000000144D9D690
#include "../UIIncubatorShared/StateNodeEntityBaseData.h"
#include "../CasablancaShared/BFUIDeepLinkTargetAsset.h"
#include "../UIIncubatorShared/StateNavEventInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILinkableStateNodeEntityData : public UIIncubatorShared::StateNodeEntityBaseData {
        CasablancaShared::BFUIDeepLinkTargetAsset Target; // 0x30
        Array<UIIncubatorShared::StateNavEventInfo> EventTriggersInfo; // 0x38
        Array<UIIncubatorShared::StateNavEventInfo> ConsumedEventsInfo; // 0x40
    }; // 0x48
    static_assert(sizeof(BFUILinkableStateNodeEntityData) == 0x48);
}
#pragma pack(pop)