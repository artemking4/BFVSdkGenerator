// Object: SpartaControllerDisconnected
// ClassId: 4816
// RuntimeId: 21293
// TypeInfo: 0x0000000144F4FD40
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaControllerDisconnected : public SpartaShared::SpartaPayload {
        Boolean Disconnected; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(SpartaControllerDisconnected) == 0x20);
}
#pragma pack(pop)