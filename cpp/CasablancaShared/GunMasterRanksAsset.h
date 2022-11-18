// Object: GunMasterRanksAsset
// ClassId: 366
// RuntimeId: 24598
// TypeInfo: 0x0000000144D647F0
#include "../Core/DataContainerPolicyAsset.h"
#include "../CasablancaShared/GunMasterRank.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GunMasterRanksAsset : public Core::DataContainerPolicyAsset {
        Array<CasablancaShared::GunMasterRank> Ranks; // 0x20
    }; // 0x28
    static_assert(sizeof(GunMasterRanksAsset) == 0x28);
}
#pragma pack(pop)