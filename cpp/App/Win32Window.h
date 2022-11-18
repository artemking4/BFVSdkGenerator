// Object: Win32Window
// ClassId: 8732
// RuntimeId: 57829
// TypeInfo: 0x0000000144BEB530
#include "../App/Window.h"

#pragma pack(push, 8)
namespace App {
    class Win32Window : public App::Window {
        char pad_0x170[0x18];
    }; // 0x188
    static_assert(sizeof(Win32Window) == 0x188);
}
#pragma pack(pop)