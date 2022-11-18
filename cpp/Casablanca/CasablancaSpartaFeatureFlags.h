// Object: CasablancaSpartaFeatureFlags
// ClassId: 4781
// RuntimeId: 32175
// TypeInfo: 0x0000000144C7F780
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaFeatureFlags : public SpartaShared::SpartaPayload {
        Array<CString> EnabledFlags; // 0x18
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaFeatureFlags) == 0x20);
}
#pragma pack(pop)