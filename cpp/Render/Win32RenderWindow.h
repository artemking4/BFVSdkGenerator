// Object: Win32RenderWindow
// ClassId: 8733
// RuntimeId: 58020
// TypeInfo: 0x0000000144F1FE50
#include "../App/Win32Window.h"

#pragma pack(push, 8)
namespace Render {
    class Win32RenderWindow : public App::Win32Window {
        char pad_0x188[0x10];
    }; // 0x198
    static_assert(sizeof(Win32RenderWindow) == 0x198);
}
#pragma pack(pop)