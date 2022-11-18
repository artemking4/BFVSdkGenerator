// Object: BFUIElementAutoContrastEntityData
// ClassId: 3639
// RuntimeId: 27937
// TypeInfo: 0x0000000144D30AA0
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementAutoContrastEntityData : public CasablancaShared::BFUIElementEntityData {
        Uint32 AutoContrastBucketId; // 0x130
        Float32 Threshold; // 0x134
        char pad_0x138[0x8];
    }; // 0x140
    static_assert(sizeof(BFUIElementAutoContrastEntityData) == 0x140);
}
#pragma pack(pop)