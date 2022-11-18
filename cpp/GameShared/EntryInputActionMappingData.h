// Object: EntryInputActionMappingData
// ClassId: 4157
// RuntimeId: 23082
// TypeInfo: 0x0000000144E6BDD0
#include "../GameShared/InputActionMappingData.h"
#include "../Global/Int32.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 8)
namespace GameShared {
    class EntryInputActionMappingData : public GameShared::InputActionMappingData {
        Int32 ActionIdentifier; // 0x18
        GameShared::InputConceptIdentifiers ConceptIdentifier; // 0x1C
    }; // 0x20
    static_assert(sizeof(EntryInputActionMappingData) == 0x20);
}
#pragma pack(pop)