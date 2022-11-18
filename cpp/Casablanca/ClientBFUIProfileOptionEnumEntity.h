// Object: ClientBFUIProfileOptionEnumEntity
// ClassId: 6543
// RuntimeId: 31085
// TypeInfo: 0x0000000144CBCDC0
#include "../Casablanca/ClientBFUIProfileOptionEntity.h"

namespace Casablanca {
    class ClientBFUIProfileOptionEnumEntity : public Casablanca::ClientBFUIProfileOptionEntity {
        char pad_0x40[0x10];
    }; // 0x50
    static_assert(sizeof(ClientBFUIProfileOptionEnumEntity) == 0x50);
}