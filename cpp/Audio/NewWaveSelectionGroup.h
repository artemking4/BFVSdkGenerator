// Object: NewWaveSelectionGroup
// ClassId: 4353
// RuntimeId: 48385
// TypeInfo: 0x0000000144E169C0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Uint8.h"
#include "../Audio/NewWaveSelectionGroupCategory.h"

#pragma pack(push, 8)
namespace Audio {
    class NewWaveSelectionGroup : public Core::DataContainer {
        Uint32 EntryCount; // 0x18
        Float32 EntryTimeout; // 0x1C
        Uint32 NameHash; // 0x20
        char pad_0x24[0x4];
        Audio::NewWaveSelectionGroupCategory Category; // 0x28
        Boolean ShouldSerialize; // 0x30
        Uint8 Behavior; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(NewWaveSelectionGroup) == 0x38);
}
#pragma pack(pop)