// Object: ClientBFUIProfileOptionBoolEntity
// ClassId: 6541
// RuntimeId: 30732
// TypeInfo: 0x0000000144CBCED0
#include "../Casablanca/ClientBFUIProfileOptionEntity.h"

namespace Casablanca {
    class ClientBFUIProfileOptionBoolEntity : public Casablanca::ClientBFUIProfileOptionEntity {
        char pad_0x40[0x8];
    }; // 0x48
    static_assert(sizeof(ClientBFUIProfileOptionBoolEntity) == 0x48);
}