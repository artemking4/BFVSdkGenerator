// Object: InputConceptComboFilter
// ClassId: 4162
// RuntimeId: 49126
// TypeInfo: 0x0000000144DF90C0
#include "../DiceShooterShared/InputConceptFilter.h"
#include "../Global/Float32.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class InputConceptComboFilter : public DiceShooterShared::InputConceptFilter {
        Float32 TimeLimit; // 0x18
        GameShared::InputConceptIdentifiers InputConcept1; // 0x1C
        GameShared::InputConceptIdentifiers InputConcept2; // 0x20
        GameShared::InputConceptIdentifiers OutputConcept1; // 0x24
        GameShared::InputConceptIdentifiers OutputConcept2; // 0x28
        GameShared::InputConceptIdentifiers OutputComboConcept; // 0x2C
    }; // 0x30
    static_assert(sizeof(InputConceptComboFilter) == 0x30);
}
#pragma pack(pop)