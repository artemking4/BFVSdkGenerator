// Object: BFUICppScreen
// ClassId: 8725
// RuntimeId: 51836
// TypeInfo: 0x0000000144CBE500
#include "../GameClient/UICppScreen.h"

namespace Casablanca {
    class BFUICppScreen : public GameClient::UICppScreen {
        char pad_0x500[0x10];
    }; // 0x510
    static_assert(sizeof(BFUICppScreen) == 0x510);
}