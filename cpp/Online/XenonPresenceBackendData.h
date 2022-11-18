// Object: XenonPresenceBackendData
// ClassId: 647
// RuntimeId: 31159
// TypeInfo: 0x0000000144F03810
#include "../Online/PresenceBackendData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Online {
    class XenonPresenceBackendData : public Online::PresenceBackendData {
        Uint32 TitleId; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(XenonPresenceBackendData) == 0x28);
}
#pragma pack(pop)