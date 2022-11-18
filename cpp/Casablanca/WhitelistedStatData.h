// Object: WhitelistedStatData
// ClassId: 5717
// RuntimeId: 26766
// TypeInfo: 0x0000000144C31270
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class WhitelistedStatData : public Core::DataContainer {
        CString Code; // 0x18
        Uint32 CodeHash; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WhitelistedStatData) == 0x28);
}
#pragma pack(pop)