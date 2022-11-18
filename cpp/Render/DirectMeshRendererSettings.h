// Object: DirectMeshRendererSettings
// ClassId: 1522
// RuntimeId: 57012
// TypeInfo: 0x0000000144F1D480
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Render {
    class DirectMeshRendererSettings : public Core::DataContainer {
        Uint32 EntityChunkSize; // 0x18
        Boolean Enable; // 0x1C
        char pad_0x1D[0x3];
    }; // 0x20
    static_assert(sizeof(DirectMeshRendererSettings) == 0x20);
}
#pragma pack(pop)