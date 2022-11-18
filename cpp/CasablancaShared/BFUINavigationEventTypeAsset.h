// Object: BFUINavigationEventTypeAsset
// ClassId: 306
// RuntimeId: 26426
// TypeInfo: 0x0000000144D88C20
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUINavigationEventTypeAsset : public Core::DataContainerPolicyAsset {
        CString EventName; // 0x20
        Int32 NameHash; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(BFUINavigationEventTypeAsset) == 0x30);
}
#pragma pack(pop)