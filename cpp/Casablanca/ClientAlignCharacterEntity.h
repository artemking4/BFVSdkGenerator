// Object: ClientAlignCharacterEntity
// ClassId: 6178
// RuntimeId: 33686
// TypeInfo: 0x0000000144C891A0
#include "../Casablanca/AlignCharacterEntity.h"

namespace Casablanca {
    class ClientAlignCharacterEntity : public Casablanca::AlignCharacterEntity {
        char pad_0x30[0xC8];
    }; // 0xF8
    static_assert(sizeof(ClientAlignCharacterEntity) == 0xF8);
}