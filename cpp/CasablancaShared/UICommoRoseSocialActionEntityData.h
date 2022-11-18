// Object: UICommoRoseSocialActionEntityData
// ClassId: 3616
// RuntimeId: 56525
// TypeInfo: 0x0000000144D2FDA0
#include "../CasablancaShared/UICommoRoseActionEntityData.h"
#include "../CasablancaShared/ChatChannelType.h"
#include "../Global/CString.h"
#include "../CasablancaShared/OrderType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UICommoRoseSocialActionEntityData : public CasablancaShared::UICommoRoseActionEntityData {
        CasablancaShared::ChatChannelType ChatChannel; // 0x20
        char pad_0x24[0x4];
        CString SID; // 0x28
        CasablancaShared::OrderType SocialOrderType; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UICommoRoseSocialActionEntityData) == 0x38);
}
#pragma pack(pop)