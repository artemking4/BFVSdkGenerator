// Object: GlobalSetAsset
// ClassId: 364
// RuntimeId: 33627
// TypeInfo: 0x0000000144D5CEE0
#include "../Core/DataContainerPolicyAsset.h"
#include "../DiceCommonsShared/BaseSetAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GlobalSetAsset : public Core::DataContainerPolicyAsset {
        Array<DiceCommonsShared::BaseSetAsset> Set; // 0x20
    }; // 0x28
    static_assert(sizeof(GlobalSetAsset) == 0x28);
}
#pragma pack(pop)