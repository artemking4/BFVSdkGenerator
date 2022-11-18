// Object: ClientCustomizationVisualClothPart
// ClassId: 57
// RuntimeId: 58061
// TypeInfo: 0x0000000144C8FB50
#include "../Casablanca/ClientCustomizationVisualPart.h"

namespace Casablanca {
    class ClientCustomizationVisualClothPart : public Casablanca::ClientCustomizationVisualPart {
        char pad_0xA0[0x10];
    }; // 0xB0
    static_assert(sizeof(ClientCustomizationVisualClothPart) == 0xB0);
}