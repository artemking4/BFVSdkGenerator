// Object: ScoringUIMappingElement
// ClassId: 4584
// RuntimeId: 58685
// TypeInfo: 0x0000000144D9FEE0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../DicePersistenceShared/ScoringTypeData.h"
#include "../DicePersistenceShared/StatEventParameterData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ScoringUIMappingElement : public Core::DataContainer {
        Int32 Index; // 0x18
        char pad_0x1C[0x4];
        DicePersistenceShared::ScoringTypeData ScoringType; // 0x20
        DicePersistenceShared::StatEventParameterData Victim; // 0x28
        DicePersistenceShared::StatEventParameterData Weapon; // 0x30
        DicePersistenceShared::StatEventParameterData Vehicle; // 0x38
    }; // 0x40
    static_assert(sizeof(ScoringUIMappingElement) == 0x40);
}
#pragma pack(pop)