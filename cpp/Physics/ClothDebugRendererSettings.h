// Object: ClothDebugRendererSettings
// ClassId: 1411
// RuntimeId: 5341
// TypeInfo: 0x0000000144F0E4C0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class ClothDebugRendererSettings : public Core::DataContainer {
        Float32 RenderDistance; // 0x18
        Boolean RenderWorld; // 0x1C
        Boolean RenderWorldStats; // 0x1D
        Boolean RenderClothInstanceStats; // 0x1E
        Boolean RenderClothInstanceSimMesh; // 0x1F
        Boolean RenderClothInstanceRenderMesh; // 0x20
        Boolean RenderClothInstanceCollidables; // 0x21
        Boolean RenderClothInstanceSkinning; // 0x22
        Boolean RenderClothInstanceParticles; // 0x23
        Boolean RenderClothInstancePreviousParticles; // 0x24
        Boolean RenderClothInstanceParticlesAabb; // 0x25
        Boolean RenderClothInstanceOperators; // 0x26
        Boolean RenderClothWorldPhantoms; // 0x27
        Boolean RenderWorldCollidables; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(ClothDebugRendererSettings) == 0x30);
}
#pragma pack(pop)