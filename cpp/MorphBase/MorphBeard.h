// Object: MorphBeard
// ClassId: 4308
// RuntimeId: 57497
// TypeInfo: 0x0000000144EA2850
#include "../Core/DataContainer.h"
#include "../Render/MeshAsset.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphBeard : public Core::DataContainer {
        Render::MeshAsset Mesh; // 0x18
    }; // 0x20
    static_assert(sizeof(MorphBeard) == 0x20);
}
#pragma pack(pop)