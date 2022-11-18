// Object: ServerDakarInteractionManagerEntity
// ClassId: 7102
// RuntimeId: 31151
// TypeInfo: 0x0000000144C3A5B0
#include "../Casablanca/DakarInteractionManagerEntity.h"

namespace Casablanca {
    class ServerDakarInteractionManagerEntity : public Casablanca::DakarInteractionManagerEntity {
        char pad_0x38[0x230];
    }; // 0x268
    static_assert(sizeof(ServerDakarInteractionManagerEntity) == 0x268);
}