// Object: InputConceptDualHoldFilter
// ClassId: 4164
// RuntimeId: 38256
// TypeInfo: 0x0000000144DF9040
#include "../DiceShooterShared/InputConceptFilter.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class InputConceptDualHoldFilter : public DiceShooterShared::InputConceptFilter {
        GameShared::InputConceptIdentifiers InputConcept1; // 0x18
        GameShared::InputConceptIdentifiers InputConcept2; // 0x1C
        GameShared::InputConceptIdentifiers OutputConcept1; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(InputConceptDualHoldFilter) == 0x28);
}
#pragma pack(pop)