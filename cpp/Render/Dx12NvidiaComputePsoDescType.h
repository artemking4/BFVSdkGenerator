// Object: Dx12NvidiaComputePsoDescType
// ClassId: 5732
// RuntimeId: 46996
// TypeInfo: 0x0000000144F1FF50
#include "../Render/Dx12ComputePsoDescType.h"

#pragma pack(push, 8)
namespace Render {
    class Dx12NvidiaComputePsoDescType : public Render::Dx12ComputePsoDescType {
        char pad_0x48[0x8];
    }; // 0x50
    static_assert(sizeof(Dx12NvidiaComputePsoDescType) == 0x50);
}
#pragma pack(pop)