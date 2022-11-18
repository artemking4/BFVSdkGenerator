// Object: MorphHair
// ClassId: 4309
// RuntimeId: 36610
// TypeInfo: 0x0000000144EA28D0
#include "../Core/DataContainer.h"
#include "../Render/MeshAsset.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphHair : public Core::DataContainer {
        Render::MeshAsset Mesh; // 0x18
    }; // 0x20
    static_assert(sizeof(MorphHair) == 0x20);
}
#pragma pack(pop)