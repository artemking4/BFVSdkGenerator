// Object: UISystem
// ClassId: 8354
// RuntimeId: 42649
// TypeInfo: 0x0000000144E41BF0
#include "../GameClient/IUISystem.h"

namespace GameClient {
    class UISystem : public GameClient::IUISystem {
        char pad_0x18[0xAA8];
    }; // 0xAC0
    static_assert(sizeof(UISystem) == 0xAC0);
}