// Object: CasablancaSpartaEoRMMConfigUpdated
// ClassId: 4779
// RuntimeId: 54054
// TypeInfo: 0x0000000144C71820
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaEoRMMConfigUpdated : public SpartaShared::SpartaPayload {
        Int32 StartDelay; // 0x18
        char pad_0x1C[0x4];
        CString NextMap; // 0x20
        CString PreviousMap; // 0x28
        CString MixId; // 0x30
        Boolean Enabled; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(CasablancaSpartaEoRMMConfigUpdated) == 0x40);
}
#pragma pack(pop)