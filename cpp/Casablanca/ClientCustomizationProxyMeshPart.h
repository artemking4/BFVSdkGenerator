// Object: ClientCustomizationProxyMeshPart
// ClassId: 54
// RuntimeId: 32241
// TypeInfo: 0x0000000144C8FDD0
#include "../Casablanca/ClientCustomizationMeshPart.h"

namespace Casablanca {
    class ClientCustomizationProxyMeshPart : public Casablanca::ClientCustomizationMeshPart {
        char pad_0xB0[0x20];
    }; // 0xD0
    static_assert(sizeof(ClientCustomizationProxyMeshPart) == 0xD0);
}