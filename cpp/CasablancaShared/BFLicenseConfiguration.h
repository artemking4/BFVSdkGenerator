// Object: BFLicenseConfiguration
// ClassId: 544
// RuntimeId: 26193
// TypeInfo: 0x0000000144D4BCF0
#include "../Online/LicenseConfiguration.h"
#include "../CasablancaShared/BFLicenseToOwnershipMap.h"
#include "../CasablancaShared/EAAccessLicense.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFLicenseConfiguration : public Online::LicenseConfiguration {
        Array<CasablancaShared::BFLicenseToOwnershipMap> GameOwnershipLicenses; // 0x28
        Array<CasablancaShared::EAAccessLicense> EAAccess; // 0x30
    }; // 0x38
    static_assert(sizeof(BFLicenseConfiguration) == 0x38);
}
#pragma pack(pop)