// Object: CounterDefinitionData
// ClassId: 1435
// RuntimeId: 36178
// TypeInfo: 0x0000000144DC7E00
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../DicePersistenceShared/CounterType.h"
#include "../DicePersistenceShared/StatAxiom.h"
#include "../DicePersistenceShared/StatParameterOperator.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class CounterDefinitionData : public Core::DataContainer {
        CString Code; // 0x18
        Int32 CompletionValue; // 0x20
        char pad_0x24[0x4];
        DicePersistenceShared::CounterType CounterType; // 0x28
        Array<DicePersistenceShared::StatAxiom> Axioms; // 0x30
        DicePersistenceShared::StatParameterOperator OutputValuesOperator; // 0x38
        Boolean CountEvents; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(CounterDefinitionData) == 0x40);
}
#pragma pack(pop)