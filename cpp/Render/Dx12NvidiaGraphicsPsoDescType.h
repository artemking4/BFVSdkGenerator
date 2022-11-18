// Object: Dx12NvidiaGraphicsPsoDescType
// ClassId: 5734
// RuntimeId: 55466
// TypeInfo: 0x0000000144F1FFD0
#include "../Render/Dx12GraphicsPsoDescType.h"

#pragma pack(push, 8)
namespace Render {
    class Dx12NvidiaGraphicsPsoDescType : public Render::Dx12GraphicsPsoDescType {
        char pad_0x2A0[0x18];
    }; // 0x2B8
    static_assert(sizeof(Dx12NvidiaGraphicsPsoDescType) == 0x2B8);
}
#pragma pack(pop)