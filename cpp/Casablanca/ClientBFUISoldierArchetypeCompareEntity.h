// Object: ClientBFUISoldierArchetypeCompareEntity
// ClassId: 6499
// RuntimeId: 37201
// TypeInfo: 0x0000000144CA8780
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUISoldierArchetypeCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUISoldierArchetypeCompareEntity) == 0x68);
}