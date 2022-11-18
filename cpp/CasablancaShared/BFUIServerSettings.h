// Object: BFUIServerSettings
// ClassId: 308
// RuntimeId: 33356
// TypeInfo: 0x0000000144D43DD0
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIServerSettings : public Core::DataContainerPolicyAsset {
        CString KillerKillsCountKey; // 0x20
        CString KillerDeathsCountKey; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIServerSettings) == 0x30);
}
#pragma pack(pop)