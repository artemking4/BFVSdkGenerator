// Object: BFUIContainerElementEntity
// ClassId: 8116
// RuntimeId: 58684
// TypeInfo: 0x0000000144CBE690
#include "../GameClient/UIElementEntity.h"

namespace Casablanca {
    class BFUIContainerElementEntity : public GameClient::UIElementEntity {
        char pad_0x150[0x30];
    }; // 0x180
    static_assert(sizeof(BFUIContainerElementEntity) == 0x180);
}