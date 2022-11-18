// Object: ClientCustomizationMeshPart
// ClassId: 51
// RuntimeId: 25004
// TypeInfo: 0x0000000144C8F940
#include "../Casablanca/ClientCustomizationPart.h"

namespace Casablanca {
    class ClientCustomizationMeshPart : public Casablanca::ClientCustomizationPart {
        char pad_0x90[0x20];
    }; // 0xB0
    static_assert(sizeof(ClientCustomizationMeshPart) == 0xB0);
}