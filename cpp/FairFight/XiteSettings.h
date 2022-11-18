// Object: XiteSettings
// ClassId: 5045
// RuntimeId: 10024
// TypeInfo: 0x0000000144EE8270
#include "../Core/SystemSettings.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace FairFight {
    class XiteSettings : public Core::SystemSettings {
        Int32 ScreenshotMaxDelay; // 0x20
        Boolean SendGameId; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(XiteSettings) == 0x28);
}
#pragma pack(pop)