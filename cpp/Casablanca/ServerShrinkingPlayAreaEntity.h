// Object: ServerShrinkingPlayAreaEntity
// ClassId: 7807
// RuntimeId: 42473
// TypeInfo: 0x0000000144C5E7A0
#include "../Casablanca/ShrinkingPlayAreaEntity.h"

namespace Casablanca {
    class ServerShrinkingPlayAreaEntity : public Casablanca::ShrinkingPlayAreaEntity {
        char pad_0xD0[0x280];
    }; // 0x350
    static_assert(sizeof(ServerShrinkingPlayAreaEntity) == 0x350);
}