// Object: CompassIconPriorityList
// ClassId: 324
// RuntimeId: 18405
// TypeInfo: 0x0000000144D2FA20
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/CompassIconPriorityInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CompassIconPriorityList : public Core::DataContainerPolicyAsset {
        Array<CasablancaShared::CompassIconPriorityInfo> PriorityList; // 0x20
        char pad_0x28[0x88];
    }; // 0xB0
    static_assert(sizeof(CompassIconPriorityList) == 0xB0);
}
#pragma pack(pop)