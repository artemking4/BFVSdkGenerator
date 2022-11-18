// Object: InputActionsData
// ClassId: 4159
// RuntimeId: 37757
// TypeInfo: 0x0000000144E6C7D0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../GameShared/ProfileOptionDataBool.h"
#include "../GameShared/InputConceptIdentifiers.h"
#include "../Global/Boolean.h"
#include "../GameShared/InputActionData.h"

#pragma pack(push, 8)
namespace GameShared {
    class InputActionsData : public Core::DataContainer {
        CString NameSid; // 0x18
        GameShared::ProfileOptionDataBool NameSidInvertOption; // 0x20
        GameShared::InputConceptIdentifiers ConceptIdentifier; // 0x28
        GameShared::InputConceptIdentifiers CopyKeyBindingFrom; // 0x2C
        Array<GameShared::InputConceptIdentifiers> CopyKeyBindingFromExtra; // 0x30
        Array<GameShared::InputActionData> InputActions; // 0x38
        Boolean CopyKeyBindingNegated; // 0x40
        Boolean HideInKeyBindings; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(InputActionsData) == 0x48);
}
#pragma pack(pop)