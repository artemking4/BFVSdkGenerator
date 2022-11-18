// Object: LocalizedStringEntity
// ClassId: 7234
// RuntimeId: 50755
// TypeInfo: 0x0000000144F6ADE0
#include "../UIIncubator/LocalizedStringEntityBase.h"

namespace UIIncubator {
    class LocalizedStringEntity : public UIIncubator::LocalizedStringEntityBase {
        char pad_0x80[0x28];
    }; // 0xA8
    static_assert(sizeof(LocalizedStringEntity) == 0xA8);
}