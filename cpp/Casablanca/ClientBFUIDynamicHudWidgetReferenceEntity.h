// Object: ClientBFUIDynamicHudWidgetReferenceEntity
// ClassId: 8278
// RuntimeId: 407
// TypeInfo: 0x0000000144CA0D40
#include "../DiceCommons/WidgetReferenceEntity.h"

namespace Casablanca {
    class ClientBFUIDynamicHudWidgetReferenceEntity : public DiceCommons::WidgetReferenceEntity {
        char pad_0x60[0x28];
    }; // 0x88
    static_assert(sizeof(ClientBFUIDynamicHudWidgetReferenceEntity) == 0x88);
}