// Object: BFUIWidgetEntity
// ClassId: 8179
// RuntimeId: 8577
// TypeInfo: 0x0000000144CA9FD0
#include "../GameClient/UIWidgetEntity.h"

namespace Casablanca {
    class BFUIWidgetEntity : public GameClient::UIWidgetEntity {
        char pad_0x130[0x8];
    }; // 0x138
    static_assert(sizeof(BFUIWidgetEntity) == 0x138);
}