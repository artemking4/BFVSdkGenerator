// Object: ClientBFUILayoutGroupListEntity
// ClassId: 6214
// RuntimeId: 60165
// TypeInfo: 0x0000000144C99410
#include "../Casablanca/BFClientUILayoutEntity.h"

namespace Casablanca {
    class ClientBFUILayoutGroupListEntity : public Casablanca::BFClientUILayoutEntity {
        char pad_0x50[0x10];
    }; // 0x60
    static_assert(sizeof(ClientBFUILayoutGroupListEntity) == 0x60);
}