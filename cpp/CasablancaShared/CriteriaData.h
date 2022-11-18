// Object: CriteriaData
// ClassId: 5245
// RuntimeId: 50045
// TypeInfo: 0x0000000144D02C20
#include "../CasablancaShared/AbstractCriteriaData.h"
#include "../DicePersistenceShared/CounterDefinitionData.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CriteriaData : public CasablancaShared::AbstractCriteriaData {
        DicePersistenceShared::CounterDefinitionData CounterDefinitionData; // 0x18
        Float32 CompletionValueModifier; // 0x20
        char pad_0x24[0x4];
        CString DescriptionSid; // 0x28
    }; // 0x30
    static_assert(sizeof(CriteriaData) == 0x30);
}
#pragma pack(pop)