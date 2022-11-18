// Object: PlaygroundConstraints
// ClassId: 4444
// RuntimeId: 22015
// TypeInfo: 0x0000000144D6E230
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PlaygroundConstraints : public Core::DataContainer {
        Int32 MaxNameSize; // 0x18
        Int32 MaxDescriptionSize; // 0x1C
        Int32 MaxSecretSize; // 0x20
        Int32 MaxMapsInRotation; // 0x24
        Int32 MaxMutators; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(PlaygroundConstraints) == 0x30);
}
#pragma pack(pop)