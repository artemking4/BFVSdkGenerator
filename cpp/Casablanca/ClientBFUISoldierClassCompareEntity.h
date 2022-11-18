// Object: ClientBFUISoldierClassCompareEntity
// ClassId: 6500
// RuntimeId: 29371
// TypeInfo: 0x0000000144CA8890
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUISoldierClassCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUISoldierClassCompareEntity) == 0x68);
}