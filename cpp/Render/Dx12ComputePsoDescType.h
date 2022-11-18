// Object: Dx12ComputePsoDescType
// ClassId: 5731
// RuntimeId: 53795
// TypeInfo: 0x0000000144F1E890
#include "../Render/Dx12PsoDescType.h"

#pragma pack(push, 8)
namespace Render {
    class Dx12ComputePsoDescType : public Render::Dx12PsoDescType {
        char pad_0x10[0x38];
    }; // 0x48
    static_assert(sizeof(Dx12ComputePsoDescType) == 0x48);
}
#pragma pack(pop)