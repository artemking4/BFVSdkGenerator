// Object: SupplySphereComponentInteractionData
// ClassId: 4195
// RuntimeId: 27439
// TypeInfo: 0x0000000144C7DB00
#include "../Casablanca/InteractionData.h"
#include "../Casablanca/PlatformFloat.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SupplySphereComponentInteractionData : public Casablanca::InteractionData {
        Casablanca::PlatformFloat InteractionDuration; // 0x28
    }; // 0x38
    static_assert(sizeof(SupplySphereComponentInteractionData) == 0x38);
}
#pragma pack(pop)