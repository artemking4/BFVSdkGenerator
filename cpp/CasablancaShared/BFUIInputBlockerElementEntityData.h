// Object: BFUIInputBlockerElementEntityData
// ClassId: 3676
// RuntimeId: 27273
// TypeInfo: 0x0000000144D9A790
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIInputBlockerElementEntityData : public CasablancaShared::BFUIElementEntityData {
        Boolean FullScreen; // 0x130
        char pad_0x131[0xF];
    }; // 0x140
    static_assert(sizeof(BFUIInputBlockerElementEntityData) == 0x140);
}
#pragma pack(pop)