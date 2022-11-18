// Object: BFSpartaDisposeSpecificGameGroupSubscriptions
// ClassId: 4685
// RuntimeId: 5982
// TypeInfo: 0x0000000144C703A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaDisposeSpecificGameGroupSubscriptions : public SpartaShared::SpartaPayload {
        Array<CString> GameGroupIds; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaDisposeSpecificGameGroupSubscriptions) == 0x20);
}
#pragma pack(pop)