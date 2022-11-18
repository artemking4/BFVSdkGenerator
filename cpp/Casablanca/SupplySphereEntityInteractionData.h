// Object: SupplySphereEntityInteractionData
// ClassId: 4196
// RuntimeId: 56237
// TypeInfo: 0x0000000144C7DB80
#include "../Casablanca/InteractionData.h"
#include "../Casablanca/PlatformFloat.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SupplySphereEntityInteractionData : public Casablanca::InteractionData {
        Casablanca::PlatformFloat InteractionDuration; // 0x28
    }; // 0x38
    static_assert(sizeof(SupplySphereEntityInteractionData) == 0x38);
}
#pragma pack(pop)