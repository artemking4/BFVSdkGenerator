// Object: SquadItemList
// ClassId: 404
// RuntimeId: 29726
// TypeInfo: 0x0000000144D355B0
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/SquadItemBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadItemList : public Core::DataContainerPolicyAsset {
        Array<CasablancaShared::SquadItemBase> Items; // 0x20
    }; // 0x28
    static_assert(sizeof(SquadItemList) == 0x28);
}
#pragma pack(pop)