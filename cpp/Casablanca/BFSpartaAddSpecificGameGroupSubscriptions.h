// Object: BFSpartaAddSpecificGameGroupSubscriptions
// ClassId: 4682
// RuntimeId: 24390
// TypeInfo: 0x0000000144C70420
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaAddSpecificGameGroupSubscriptions : public SpartaShared::SpartaPayload {
        Array<CString> GameGroupIds; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaAddSpecificGameGroupSubscriptions) == 0x20);
}
#pragma pack(pop)