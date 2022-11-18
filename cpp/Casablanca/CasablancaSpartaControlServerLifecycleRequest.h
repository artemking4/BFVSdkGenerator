// Object: CasablancaSpartaControlServerLifecycleRequest
// ClassId: 4775
// RuntimeId: 55519
// TypeInfo: 0x0000000144C729A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaControlServerLifecycleRequest : public SpartaShared::SpartaPayload {
        CString GameId; // 0x18
        Int32 ServerAction; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(CasablancaSpartaControlServerLifecycleRequest) == 0x28);
}
#pragma pack(pop)