// Object: Dx12GraphicsPsoDescType
// ClassId: 5733
// RuntimeId: 20958
// TypeInfo: 0x0000000144F1E910
#include "../Render/Dx12PsoDescType.h"

#pragma pack(push, 8)
namespace Render {
    class Dx12GraphicsPsoDescType : public Render::Dx12PsoDescType {
        char pad_0x10[0x290];
    }; // 0x2A0
    static_assert(sizeof(Dx12GraphicsPsoDescType) == 0x2A0);
}
#pragma pack(pop)