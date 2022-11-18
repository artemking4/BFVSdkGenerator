// Object: BFUIListNavigationWidget
// ClassId: 8190
// RuntimeId: 44868
// TypeInfo: 0x0000000144CBADA0
#include "../Casablanca/BFUINavigationWidget.h"

namespace Casablanca {
    class BFUIListNavigationWidget : public Casablanca::BFUINavigationWidget {
        char pad_0x1B0[0x18];
    }; // 0x1C8
    static_assert(sizeof(BFUIListNavigationWidget) == 0x1C8);
}