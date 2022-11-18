// Object: ClientBFUIFactionCompareEntity
// ClassId: 6498
// RuntimeId: 55771
// TypeInfo: 0x0000000144CA89A0
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIFactionCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIFactionCompareEntity) == 0x68);
}