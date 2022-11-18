// Object: ClientCustomizationChassisPart
// ClassId: 53
// RuntimeId: 30980
// TypeInfo: 0x0000000144C8F9C0
#include "../Casablanca/ClientCustomizationMeshPart.h"

namespace Casablanca {
    class ClientCustomizationChassisPart : public Casablanca::ClientCustomizationMeshPart {
        char pad_0xB0[0x20];
    }; // 0xD0
    static_assert(sizeof(ClientCustomizationChassisPart) == 0xD0);
}