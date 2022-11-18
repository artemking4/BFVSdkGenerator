// Object: EncounterContainerActivator
// ClassId: 1546
// RuntimeId: 16130
// TypeInfo: 0x0000000144D0ADB0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterContainerActivator : public Core::DataContainer {
        Float32 ActivationDistance; // 0x18
        Float32 DeactivationOverlapPadding; // 0x1C
        Float32 DeactivationDistance; // 0x20
        Boolean RequireAllPlayers; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(EncounterContainerActivator) == 0x28);
}
#pragma pack(pop)