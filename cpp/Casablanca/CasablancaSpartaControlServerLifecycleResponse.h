// Object: CasablancaSpartaControlServerLifecycleResponse
// ClassId: 4776
// RuntimeId: 2673
// TypeInfo: 0x0000000144C718A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Casablanca/SpartaControlServerResult.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaControlServerLifecycleResponse : public SpartaShared::SpartaPayload {
        CString GameId; // 0x18
        Casablanca::SpartaControlServerResult Result; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(CasablancaSpartaControlServerLifecycleResponse) == 0x28);
}
#pragma pack(pop)