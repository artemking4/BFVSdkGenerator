// Object: ClientBFUISoldierKitCompareEntity
// ClassId: 6502
// RuntimeId: 18931
// TypeInfo: 0x0000000144CA8670
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUISoldierKitCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUISoldierKitCompareEntity) == 0x68);
}