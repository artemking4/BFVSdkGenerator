// Object: BFSpartaGetPlaygroundRequest
// ClassId: 4844
// RuntimeId: 5727
// TypeInfo: 0x0000000144C6F620
#include "../SpartaShared/SpartaSimplePayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaGetPlaygroundRequest : public SpartaShared::SpartaSimplePayload {
        CString PlaygroundId; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaGetPlaygroundRequest) == 0x20);
}
#pragma pack(pop)