// Object: ClientBFUIAppearanceCompareEntity
// ClassId: 6494
// RuntimeId: 31479
// TypeInfo: 0x0000000144CA8450
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIAppearanceCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIAppearanceCompareEntity) == 0x68);
}