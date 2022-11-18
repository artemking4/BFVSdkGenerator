// Object: ClientBFUIProfileOptionFloatEntity
// ClassId: 6544
// RuntimeId: 22970
// TypeInfo: 0x0000000144CBCFE0
#include "../Casablanca/ClientBFUIProfileOptionEntity.h"

namespace Casablanca {
    class ClientBFUIProfileOptionFloatEntity : public Casablanca::ClientBFUIProfileOptionEntity {
        char pad_0x40[0x28];
    }; // 0x68
    static_assert(sizeof(ClientBFUIProfileOptionFloatEntity) == 0x68);
}