// Object: InputConceptDoubleTriggerFilter
// ClassId: 4163
// RuntimeId: 47282
// TypeInfo: 0x0000000144DF8F40
#include "../DiceShooterShared/InputConceptFilter.h"
#include "../Global/Float32.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class InputConceptDoubleTriggerFilter : public DiceShooterShared::InputConceptFilter {
        Float32 TimeLimit; // 0x18
        GameShared::InputConceptIdentifiers InputConcept; // 0x1C
        GameShared::InputConceptIdentifiers DoubleTriggerConcept; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(InputConceptDoubleTriggerFilter) == 0x28);
}
#pragma pack(pop)