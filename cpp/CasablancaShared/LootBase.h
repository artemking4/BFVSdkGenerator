// Object: LootBase
// ClassId: 367
// RuntimeId: 46934
// TypeInfo: 0x0000000144D02520
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LootBase : public Core::DataContainerPolicyAsset {
        CString DebugName; // 0x20
    }; // 0x28
    static_assert(sizeof(LootBase) == 0x28);
}
#pragma pack(pop)