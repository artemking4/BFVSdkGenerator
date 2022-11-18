// Object: ServerAlignCharacterEntity
// ClassId: 6179
// RuntimeId: 45210
// TypeInfo: 0x0000000144CDE920
#include "../Casablanca/AlignCharacterEntity.h"

namespace Casablanca {
    class ServerAlignCharacterEntity : public Casablanca::AlignCharacterEntity {
        char pad_0x30[0xF8];
    }; // 0x128
    static_assert(sizeof(ServerAlignCharacterEntity) == 0x128);
}