// Object: ClientCustomizationVisualMeshPart
// ClassId: 58
// RuntimeId: 50244
// TypeInfo: 0x0000000144C8F8C0
#include "../Casablanca/ClientCustomizationVisualPart.h"

namespace Casablanca {
    class ClientCustomizationVisualMeshPart : public Casablanca::ClientCustomizationVisualPart {
        char pad_0xA0[0x10];
    }; // 0xB0
    static_assert(sizeof(ClientCustomizationVisualMeshPart) == 0xB0);
}