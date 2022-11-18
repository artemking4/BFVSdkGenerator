// Object: ClientBFUISoldierInstanceCompareEntity
// ClassId: 6501
// RuntimeId: 18880
// TypeInfo: 0x0000000144CA8560
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUISoldierInstanceCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUISoldierInstanceCompareEntity) == 0x68);
}