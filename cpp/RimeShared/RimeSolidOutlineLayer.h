// Object: RimeSolidOutlineLayer
// ClassId: 4575
// RuntimeId: 24282
// TypeInfo: 0x0000000144F27510
#include "../RimeShared/RimeOutlineLayer.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace RimeShared {
    class RimeSolidOutlineLayer : public RimeShared::RimeOutlineLayer {
        char pad_0x38[0x8];
        Core::Vec4 Color; // 0x40
    }; // 0x50
    static_assert(sizeof(RimeSolidOutlineLayer) == 0x50);
}
#pragma pack(pop)