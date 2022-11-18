// Object: ClientBFUIDynamicWidgetReferenceEntity
// ClassId: 8280
// RuntimeId: 28666
// TypeInfo: 0x0000000144CA14B0
#include "../DiceCommons/WidgetReferenceEntity.h"

namespace Casablanca {
    class ClientBFUIDynamicWidgetReferenceEntity : public DiceCommons::WidgetReferenceEntity {
        char pad_0x60[0x30];
    }; // 0x90
    static_assert(sizeof(ClientBFUIDynamicWidgetReferenceEntity) == 0x90);
}