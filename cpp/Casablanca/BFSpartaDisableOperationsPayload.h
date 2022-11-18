// Object: BFSpartaDisableOperationsPayload
// ClassId: 4684
// RuntimeId: 37297
// TypeInfo: 0x0000000144C70FA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaDisableOperationsPayload : public SpartaShared::SpartaPayload {
        Array<CString> operationsDisabled; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaDisableOperationsPayload) == 0x20);
}
#pragma pack(pop)