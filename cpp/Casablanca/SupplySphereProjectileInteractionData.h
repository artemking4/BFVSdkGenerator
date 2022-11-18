// Object: SupplySphereProjectileInteractionData
// ClassId: 4197
// RuntimeId: 39516
// TypeInfo: 0x0000000144C7DC00
#include "../Casablanca/InteractionData.h"
#include "../Casablanca/PlatformFloat.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SupplySphereProjectileInteractionData : public Casablanca::InteractionData {
        Casablanca::PlatformFloat InteractionDuration; // 0x28
    }; // 0x38
    static_assert(sizeof(SupplySphereProjectileInteractionData) == 0x38);
}
#pragma pack(pop)