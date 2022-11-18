// Object: MeshWorldSettings
// ClassId: 4287
// RuntimeId: 29922
// TypeInfo: 0x0000000144EB9390
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace WorldRender {
    class MeshWorldSettings : public Core::DataContainer {
        Boolean Dummy; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(MeshWorldSettings) == 0x20);
}
#pragma pack(pop)