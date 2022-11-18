// Object: BFSpartaSetGlobeStatePayload
// ClassId: 4729
// RuntimeId: 2480
// TypeInfo: 0x0000000144C717A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaSetGlobeStatePayload : public SpartaShared::SpartaPayload {
        CString State; // 0x18
        Float32 Duration; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFSpartaSetGlobeStatePayload) == 0x28);
}
#pragma pack(pop)