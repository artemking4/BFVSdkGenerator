// Object: ClientCustomizationVisualSkinnedMeshPart
// ClassId: 59
// RuntimeId: 6934
// TypeInfo: 0x0000000144C8FBD0
#include "../Casablanca/ClientCustomizationVisualMeshPart.h"

namespace Casablanca {
    class ClientCustomizationVisualSkinnedMeshPart : public Casablanca::ClientCustomizationVisualMeshPart {
        char pad_0xB0[0x30];
    }; // 0xE0
    static_assert(sizeof(ClientCustomizationVisualSkinnedMeshPart) == 0xE0);
}