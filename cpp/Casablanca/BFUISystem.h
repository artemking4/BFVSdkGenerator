// Object: BFUISystem
// ClassId: 8355
// RuntimeId: 13859
// TypeInfo: 0x0000000144C59E90
#include "../GameClient/UISystem.h"

namespace Casablanca {
    class BFUISystem : public GameClient::UISystem {
        char pad_0xAC0[0x870];
    }; // 0x1330
    static_assert(sizeof(BFUISystem) == 0x1330);
}