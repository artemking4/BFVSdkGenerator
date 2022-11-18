// Object: NucleusPresenceBackendData
// ClassId: 641
// RuntimeId: 5477
// TypeInfo: 0x0000000144F03990
#include "../Online/PresenceBackendData.h"
#include "../Global/CString.h"
#include "../Nucleus/NucleusPlatformConfiguration.h"

#pragma pack(push, 8)
namespace Online {
    class NucleusPresenceBackendData : public Online::PresenceBackendData {
        CString PsnClientId; // 0x20
        Array<Nucleus::NucleusPlatformConfiguration> Platforms; // 0x28
    }; // 0x30
    static_assert(sizeof(NucleusPresenceBackendData) == 0x30);
}
#pragma pack(pop)