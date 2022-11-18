// Object: ClientBFCheckedLocalizedStringEntity
// ClassId: 7233
// RuntimeId: 25774
// TypeInfo: 0x0000000144C90B90
#include "../UIIncubator/LocalizedStringEntityBase.h"

namespace Casablanca {
    class ClientBFCheckedLocalizedStringEntity : public UIIncubator::LocalizedStringEntityBase {
        char pad_0x80[0x20];
    }; // 0xA0
    static_assert(sizeof(ClientBFCheckedLocalizedStringEntity) == 0xA0);
}