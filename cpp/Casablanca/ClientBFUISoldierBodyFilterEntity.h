// Object: ClientBFUISoldierBodyFilterEntity
// ClassId: 6403
// RuntimeId: 55481
// TypeInfo: 0x0000000144CA7020
#include "../Casablanca/ClientBFUIFilterEntityBase.h"

namespace Casablanca {
    class ClientBFUISoldierBodyFilterEntity : public Casablanca::ClientBFUIFilterEntityBase {
        char pad_0x38[0x28];
    }; // 0x60
    static_assert(sizeof(ClientBFUISoldierBodyFilterEntity) == 0x60);
}