// Object: ClientBFUILayoutFlowListEntity
// ClassId: 6212
// RuntimeId: 17301
// TypeInfo: 0x0000000144C99630
#include "../Casablanca/BFClientUILayoutEntity.h"

namespace Casablanca {
    class ClientBFUILayoutFlowListEntity : public Casablanca::BFClientUILayoutEntity {
        char pad_0x50[0x20];
    }; // 0x70
    static_assert(sizeof(ClientBFUILayoutFlowListEntity) == 0x70);
}