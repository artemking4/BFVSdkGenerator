// Object: BFUICppScreenData
// ClassId: 873
// RuntimeId: 63887
// TypeInfo: 0x0000000144D6D3B0
#include "../GameShared/UICppScreenData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICppScreenData : public GameShared::UICppScreenData {
        Boolean DrawBlackBorders; // 0x38
        Boolean CenterLayout; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(BFUICppScreenData) == 0x40);
}
#pragma pack(pop)