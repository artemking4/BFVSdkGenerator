// Object: ClientBFUIClassFilterEntityBase
// ClassId: 6396
// RuntimeId: 11782
// TypeInfo: 0x0000000144CAA410
#include "../Casablanca/ClientBFUIFilterEntityBase.h"

namespace Casablanca {
    class ClientBFUIClassFilterEntityBase : public Casablanca::ClientBFUIFilterEntityBase {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ClientBFUIClassFilterEntityBase) == 0x40);
}