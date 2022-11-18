// Object: EditableAction
// ClassId: 1535
// RuntimeId: 59443
// TypeInfo: 0x0000000144E6C550
#include "../Core/DataContainer.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 8)
namespace GameShared {
    class EditableAction : public Core::DataContainer {
        GameShared::InputConceptIdentifiers Concept; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(EditableAction) == 0x20);
}
#pragma pack(pop)