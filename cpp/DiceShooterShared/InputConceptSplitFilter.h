// Object: InputConceptSplitFilter
// ClassId: 4165
// RuntimeId: 47582
// TypeInfo: 0x0000000144DF8FC0
#include "../DiceShooterShared/InputConceptFilter.h"
#include "../Global/Float32.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class InputConceptSplitFilter : public DiceShooterShared::InputConceptFilter {
        Float32 TimeLimit; // 0x18
        GameShared::InputConceptIdentifiers InputConcept; // 0x1C
        GameShared::InputConceptIdentifiers QuickConcept; // 0x20
        GameShared::InputConceptIdentifiers DoubleConcept; // 0x24
        GameShared::InputConceptIdentifiers HoldConcept; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(InputConceptSplitFilter) == 0x30);
}
#pragma pack(pop)