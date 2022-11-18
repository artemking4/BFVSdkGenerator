// Object: InputActionData
// ClassId: 4145
// RuntimeId: 26658
// TypeInfo: 0x0000000144E6C850
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../GameShared/InputConceptIdentifiers.h"

#pragma pack(push, 8)
namespace GameShared {
    class InputActionData : public Core::DataContainer {
        GameShared::InputConceptIdentifiers CopyKeyBindingFromExtra; // 0x18
        Boolean IsAnalog; // 0x1C
        Boolean NegateValue; // 0x1D
        Boolean DisableRebinding; // 0x1E
        char pad_0x1F[0x1];
    }; // 0x20
    static_assert(sizeof(InputActionData) == 0x20);
}
#pragma pack(pop)