// Object: ClientShrinkingPlayAreaEntity
// ClassId: 7806
// RuntimeId: 51879
// TypeInfo: 0x0000000144C47B10
#include "../Casablanca/ShrinkingPlayAreaEntity.h"

namespace Casablanca {
    class ClientShrinkingPlayAreaEntity : public Casablanca::ShrinkingPlayAreaEntity {
        char pad_0xD0[0x100];
    }; // 0x1D0
    static_assert(sizeof(ClientShrinkingPlayAreaEntity) == 0x1D0);
}