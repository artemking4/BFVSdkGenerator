// Object: ClientBFUIAppearanceSetCompareEntity
// ClassId: 6496
// RuntimeId: 25789
// TypeInfo: 0x0000000144CA8230
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIAppearanceSetCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIAppearanceSetCompareEntity) == 0x68);
}