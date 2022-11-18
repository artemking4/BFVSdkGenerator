// Object: FootprintBiomeTheme
// ClassId: 5277
// RuntimeId: 24370
// TypeInfo: 0x0000000144D09CB0
#include "../CasablancaShared/FootprintNodeBase.h"
#include "../CasablancaShared/FootprintDatabase.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FootprintBiomeTheme : public CasablancaShared::FootprintNodeBase {
        CasablancaShared::FootprintDatabase Database; // 0x28
        Int32 MaxInstances; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(FootprintBiomeTheme) == 0x38);
}
#pragma pack(pop)