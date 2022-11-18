// Object: WindowSettings
// ClassId: 5044
// RuntimeId: 18996
// TypeInfo: 0x0000000144BEB2A0
#include "../Core/SystemSettings.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace App {
    class WindowSettings : public Core::SystemSettings {
        Int32 PosX; // 0x20
        Int32 PosY; // 0x24
        Uint32 Width; // 0x28
        Uint32 Height; // 0x2C
        Boolean AutoSize; // 0x30
        Boolean FullscreenAutoSize; // 0x31
        Boolean EnableEscape; // 0x32
        Boolean EnableInputOnActivate; // 0x33
        Boolean HibernateOnClose; // 0x34
        Boolean Hidden; // 0x35
        Boolean Minimized; // 0x36
        Boolean AllowWindowsLargerThanDesktop; // 0x37
        Boolean Borderless; // 0x38
        Boolean Layered; // 0x39
        Boolean ClipChildren; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(WindowSettings) == 0x40);
}
#pragma pack(pop)