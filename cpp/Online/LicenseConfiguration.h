// Object: LicenseConfiguration
// ClassId: 543
// RuntimeId: 13861
// TypeInfo: 0x0000000144F03C10
#include "../Core/Asset.h"
#include "../Online/LicenseInfo.h"

#pragma pack(push, 8)
namespace Online {
    class LicenseConfiguration : public Core::Asset {
        Array<Online::LicenseInfo> Licenses; // 0x20
    }; // 0x28
    static_assert(sizeof(LicenseConfiguration) == 0x28);
}
#pragma pack(pop)