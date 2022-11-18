// Object: CheckedLocalizedStringEntity
// ClassId: 7232
// RuntimeId: 13530
// TypeInfo: 0x0000000144DA8B00
#include "../UIIncubator/LocalizedStringEntityBase.h"

namespace DiceCommons {
    class CheckedLocalizedStringEntity : public UIIncubator::LocalizedStringEntityBase {
        char pad_0x80[0x18];
    }; // 0x98
    static_assert(sizeof(CheckedLocalizedStringEntity) == 0x98);
}